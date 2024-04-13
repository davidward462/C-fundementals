#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "testing.h"
#include "random.h"

/*
 * Coding Style:
 * Inspired by K&R and linux kernel standards.
 * Functions use snake_case.
 * Variables use short names and snake_case when needed.
 * Block curly brace goes on the same line, except for funtions.
 */

int main()
{
        // initialize random generation
        seed();

        // check testing file
        testing();

        run_tests();

        return 0;
}
