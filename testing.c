#include <stdio.h>
#include <stdbool.h>

#include "testing.h"

// Include all files that need to be tested.
#include "random.h"
#include "array.h"

void testing()
{
        printf("Testing files included.\n");
}

// Print the value of a boolean to the display
void print_bool(bool b)
{
        b ? printf("true\n") : printf("false\n");
}

// Return true if expected and actual truth values match.
bool assert(bool expected, bool actual)
{
        bool result = false;
        if (expected == actual)
        {
                result = true;
        }
        return result;
}


void test_rand_interval(int count, int min, int max)
{
        printf("Displaying %d calls of rand_interval(%d, %d)\n", count, min, max);

        for (int i = 0; i < count; i++) {
                int value = rand_interval(min, max);
                printf("%d\n", value);
        }
}

void print_random_float(float min, float max)
{
        float f = random_float_range(min, max);
        printf("%f ", f);
}

bool test_array_max(float a[], int len, float expected_max)
{
        float actual_max = array_max(a, len);
        if (expected_max != actual_max) {
                printf("Failed: array_max()\n");
        }
}

void run_random_test()
{
        for (int i = 0; i < 20; i++) {
                print_random_float(-100.0, 100.0);
        }
        printf("\n");
}

bool test_fill_array(float input[], float expected[], int len, float value)
{
        fill_array(input, len, value);

        bool result = array_are_equal(input, expected, len);
        if (result) {
                printf("Passed.\n");
        }
        else {
                printf("Failed: fill_array()\n");
        }

        return result;
}

bool test_random_fill_array(float a[], int len, float min, float max)
{
        random_fill_array(a, len, min, max);
        print_array(a, len);
}

bool test_array_are_equal(float a[], float b[], int len, bool expected)
{
        bool actual = array_are_equal(a, b, len);

        if (expected == actual) {
                printf("Passed.\n");
                return true;
        }
        else {
                printf("Failed: array_are_equal()\n");
                return false;
        }
}

bool test_array_is_sorted(float a[], int len, bool expected)
{
        bool actual = array_is_sorted(a, len);

        if (actual == expected) {
                printf("Passed.\n");
                return true;
        }
        else {
                printf("Failed.\n");
                return false;
        }
}

bool test_bubblesort(float a[], int len)
{
        bubblesort(a, len);
        bool is_sorted = array_is_sorted(a, len);
        if (is_sorted) {
                printf("Passed.\n");
                return true;
        }
        else {
                printf("Failed.\n");
                print_array(a, len);
                return false;
        }
}

bool test_swap(float a[], float expected[])
{
        swap(&a[0], &a[1]);
        bool result = array_are_equal(a, expected, 2);
        if (result) {
                printf("Passed.\n");
                return true;
        }
        else {
                printf("Failed.\n");
                return false;
        }
}

void run_array_tests()
{
        printf("\nBegin array tests...\n");

        // testing arrays
        float one[1] = {2.4};
        float two[2] = {6.75, 1.01};
        float three[3] = {0.0, 3.54, 7.212};

        float alpha[1] = {6.44};
        float beta[2] = {0.001, 643.2};
        float beta_clone[2] = {0.001, 643.2};
        float gamma[3] = {63.2, 111.5, 1.4};
        float gamma_clone[3] = {63.2, 111.5, 1.4};

        float fill_one[1];
        float fill_two[2];
        float fill_three[3];

        // random arrays
        float min = -10.0;
        float max = 10.0;
        float r_A[1];
        float r_B[2];
        float r_C[3];
        float r_D[10];
        random_fill_array(r_A, 1, min, max);
        random_fill_array(r_B, 2, min, max);
        random_fill_array(r_C, 3, min, max);
        random_fill_array(r_D, 10, min, max);

        // for swapping
        float swap_start[2] = {0.0, 1.0};
        float swap_end[2] = {1.0, 0.0};

        test_array_max(one, 1, one[0]);
        test_array_max(two, 2, two[0]);
        test_array_max(three, 3, three[2]);
        printf("\n");

        test_array_are_equal(one, alpha, 1, false);
        test_array_are_equal(beta, beta_clone, 2, true);
        test_array_are_equal(three, gamma, 3, false);
        printf("\n");

        float expected[1] = {0.0};
        test_fill_array(fill_one, expected, 1, 0.0);

        test_array_is_sorted(one, 1, true);
        test_array_is_sorted(three, 3, true);
        test_array_is_sorted(beta, 2, true);
        test_array_is_sorted(gamma, 3, false);
        test_array_is_sorted(two, 2, false);
        printf("\n");

        test_bubblesort(r_A, 1);
        test_bubblesort(r_B, 2);
        test_bubblesort(r_C, 3);
        test_bubblesort(r_D, 10);
        printf("\n");

        test_swap(swap_start, swap_end);

        printf("End array tests...\n");
}
