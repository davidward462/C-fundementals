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
        if (result == false) {
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
                return true;
        }
        else {
                printf("Test failed: array_are_equal()\n");
                return false;
        }
}

void run_array_tests()
{
        printf("Begin array tests...\n");

        float a[] = {3.55, 0.0, 24.5};
        float b[] = {9.9904, 9.0, 1.0};
        test_array_are_equal(a, b, 3, false);

        float c[] = {0.222};
        float d[] = {0.222};
        test_array_are_equal(c, d, 1, true);

        float e[] = {5345.22003};
        float f[] = {0.222};
        test_array_are_equal(e, f, 1, false);

        float x[] = {1.0, 1.0, 1.0};
        float y[] = {1.0, 1.0, 1.0};
        test_array_are_equal(x, y, 3, true);

        float array[3];
        int len = 3;
        float expected[] = {0.0, 0.0, 0.0};
        test_fill_array(array, expected, len, 0.0);

        float g[1];
        len = 1;
        float h[] = {1.0};
        test_fill_array(g, h, len, 1.0);

        float i[] = {4.5, 4.5, 4.5};
        // use existing list a
        test_fill_array(a, i, 3, 4.5);

        float A[1];
        test_random_fill_array(A, 1, -10.0, 10.0);

        float B[10];
        test_random_fill_array(A, 10, 100.0, 200.0);

        printf("End array tests...\n");
}







