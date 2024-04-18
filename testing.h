#ifndef TESTING_H
#define TESTING_H

#include <stdbool.h>

void testing();

void test_rand_interval(int count, int min, int max);

void print_random_float(float min, float max);

void run_random_test();

void run_array_tests();

bool test_fill_array(float input[], float expected[], int len, float value);

#endif
