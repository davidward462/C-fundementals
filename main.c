#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
        max++;
        int value = rand() % max + min;
        return value;
}

int main()
{
        // seed random function
        srand(time(NULL));

        // for testing
        for (int i = 0; i < 15; i++) {
                int value = rand_interval(0, 1);
                printf("%d\n", value);
        }

        return 0;
}
