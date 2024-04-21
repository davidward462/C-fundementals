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

void print_args(int argc, char** argv)
{
        printf("argc = %d\n", argc);

        // Loop through all the arguments passed and print them in an array format.
        printf("argv = [");
        for(int i = 0; i < argc; i++)
        {
                printf("'%s'", argv[i]);

                // Only print command and space on non-last entries.
                if (i < argc - 1)
                {
                    printf(", ");
                }
        }
        printf("]\n");
}

int main(int argc, char** argv)
{
        // initialize random generation
        seed();

        // check files are included
        testing();
        array_header();

        // run tests
        run_array_tests();

        // print_args(argc, argv);

        return 0;
}
