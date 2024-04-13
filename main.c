#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

#include "testing.h"

/*
 * Coding Style:
 * Inspired by K&R and linux kernel standards.
 * Functions use snake_case.
 * Variables use short names and snake_case when needed.
 * Block curly brace goes on the same line, except for funtions.
 */


// Output a random integer x in the range min <= x <= max.
int rand_interval(int min, int max)
{
        int range = abs(max - min);
        max++;
        int value = rand() % range + min;
        return value;
}

void test_rand_interval(int count, int min, int max)
{
        printf("Displaying %d calls of rand_interval(%d, %d)\n", count, min, max);

        for (int i = 0; i < count; i++) {
                int value = rand_interval(min, max);
                printf("%d\n", value);
        }
}

int main()
{
        // seed random function
        srand(time(NULL));

        // for testing
        test_rand_interval(20, -10, 10);

        foo();

        return 0;
}
