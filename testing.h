#ifndef TESTING_H
#define TESTING_H

#include <stdbool.h>

void print_bool(bool b);

void test_result(bool b);

void test_rand_interval(int count, int min, int max);

void print_random_float(float min, float max);

void run_random_test();

void run_array_tests();

void test_array_are_equal(float a[], float b[], int len, bool expected);

void test_random_fill_array(float a[], int len, float min, float max);

void test_fill_array(float input[], float expected[], int len, float value);

void test_array_max(float a[], int len, float expected_max);

void test_bubblesort(float a[], int len);

#endif
