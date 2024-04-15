#include <stdio.h>

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

void fill_array(float a[], int len, float value)
{
        for (int i = 0; i < len; i++) {
                a[i] = value;
        }
}
