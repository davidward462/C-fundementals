#include <stdio.h>
#include <math.h>

#include "testing.h"
#include "random.h"
#include "array.h"

/*
 * Coding Style:
 * Inspired by K&R and linux kernel standards.
 * Functions use snake_case.
 * Variables use short names and snake_case when needed.
 * Block curly brace goes on the same line, except for function.
 */

int main()
{
        // initialize random generation
        seed();

        // check files are included
        testing();
        array_header();

        // run tests
        //run_random_test();
        run_array_tests();

        return 0;
}
