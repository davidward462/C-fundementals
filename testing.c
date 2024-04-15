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

void print_random_float(float max)
{
        float f = random_float(max);
        printf("%f ", f);
}


void run_random_test()
{
        for (int i = 0; i < 10; i++) {
                print_random_float(100.0);
        }
        printf("\n");
}

bool test_fill_array(float input[], float expected[], int len, float value)
{
        fill_array(input, len, 0.0);

        print_array(input, len);
        print_array(expected, len);

        return true;
}

void run_array_tests()
{
        float a[3];
        int len = 3;
        float expected[] = {0.0, 0.0, 0.0};
        test_fill_array(a, expected, len, 0.0);
}







