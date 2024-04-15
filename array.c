#include <stdio.h>
#include <stdbool.h>

#include "array.h"

void array_header()
{
        printf("Array files included.\n");
}

void print_array(float array[], int len)
{
        printf("[ ");
        for (int i = 0; i < len; i++)
        {
                printf("%f ", array[i]);
        }
        printf("]\n");
}

bool array_are_equal(float a[], float b[], int len)
{
        return false;
}

void fill_array(float a[], int len, float value)
{
        for (int i = 0; i < len; i++) {
                a[i] = value;
        }
}
