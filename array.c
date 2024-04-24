#include <stdio.h>
#include <stdbool.h>

#include "array.h"
#include "random.h"

void array_header()
{
        printf("Array files included.\n");
}

void print_array(float array[], int len)
{
        printf("[");
        for (int i = 0; i < len-1; i++)
        {
                printf("%f, ", array[i]);
        }
        printf("%g", array[len-1]);
        printf("]\n");
}

bool array_are_equal(float a[], float b[], int len)
{
        bool result = true;

        for (int i = 0; i < len; i++) {
                if (a[i] != b[i]) {
                        result = false;
                }
        }

        return result;
}

void fill_array(float a[], int len, float value)
{
        for (int i = 0; i < len; i++) {
                a[i] = value;
        }
}

float array_max(float a[], int len)
{
        float max = a[0];
        for (int i = 0; i < len; i++) {
                if (a[i] > max) {
                        max = a[i];
                }
        }
        return max;
}

void random_fill_array(float a[], int len, float min, float max)
{
        for (int i = 0; i < len; i++) {
                a[i] = random_float_range(min, max);
        }
}

bool array_is_sorted(float a[], int len)
{

        float current;
        float next;
        for (int i = 0; i < len-1; i++) {
                current = a[i];
                next = a[i+1];
                if (next < current) {
                        return false;
                }
        }
        return true;
}

void swap(float *a, float *b)
{
        // store value at a in temp.
        float temp = *a;

        // set value at a as value at.
        *a = *b;

        // set value at b as value in temp.
        *b = temp;
}

void bubblesort(float a[], int len)
{
        int i;
        int j;
        bool swapped;

        // loop up to second last element of array
        for (int i = 0; i < len-1; i++) {

                swapped = false;
                for (int j = 0; j < len - i - 1; j++) {

                        // if current is larger than next
                        if (a[j] > a[j+1]) {
                                // swap
                                swap(&a[j], &a[j+1]);
                                swapped = true;
                        }
                }

                // end if no swap has happened
                if (!swapped) {
                        break;
                }
        }
}








