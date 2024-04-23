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

void print_bool(bool b)
{
        if (b) {
                printf("true\n");
        }
        else {
                printf("false\n");
        }
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
                printf("Test failed: array_max()\n");
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
                printf("Test passed.\n");
        }
        else {
                printf("Test failed: fill_array()\n");
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
        bool result = array_are_equal(a, b, len);

        if (result == expected) {
                printf("Test passed.\n");
                return true;
        }
        else {
                printf("Test failed: array_are_equal()\n");
                return false;
        }
}

bool test_array_is_sorted(float a[], int len, bool expected)
{
        printf("\n");
        bool actual = array_is_sorted(a, len);
        print_array(a, len);
        print_bool(actual);

        return false;
}

void run_array_tests()
{
        printf("\nBegin array tests...\n");

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

        test_array_max(one, 1, one[0]);
        test_array_max(two, 2, two[0]);
        test_array_max(three, 3, three[2]);

        test_array_are_equal(one, alpha, 1, false);
        test_array_are_equal(beta, beta_clone, 2, true);
        test_array_are_equal(three, gamma, 3, false);

        float expected[1] = {0.0};
        test_fill_array(fill_one, expected, 1, 0.0);

        test_array_is_sorted(one, 1, true);
        test_array_is_sorted(three, 3, true);
        test_array_is_sorted(beta, 2, true);

        test_array_is_sorted(gamma, 3, false);
        test_array_is_sorted(two, 2, false);

        printf("End array tests...\n");
}
