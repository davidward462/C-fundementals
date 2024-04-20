#ifndef ARRAY_H
#define ARRAY_H

#include <stdbool.h>

void array_header();

void print_array(float array[], int length);

bool array_are_equal(float a[], float b[], int len);

void fill_array(float a[], int length, float value);

float array_max(float a[], int len);

void random_fill_array(float a[], int len, float min, float max);

#endif
