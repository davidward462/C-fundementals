#ifndef RANDOM_H
#define RANDOM_H

void seed();

int rand_interval(int min, int max);

float random_float_range(float min, float max);

void random_fill_array(float a[], int len, float min, float max);

#endif
