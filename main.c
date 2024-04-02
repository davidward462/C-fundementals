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

int random_int(int range, int min)
{
        int value = rand() % range + min;
        return value;
}

int main()
{
        // seed random function
        srand(time(NULL));

        return 0;
}
