#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "random.h"

// Seed the random generation function with current system time
void seed()
{
        srand(time(NULL));
        printf("Random generation seeded.\n");
}

// Output a random integer x in the range min <= x <= max.
int rand_interval(int min, int max)
{
        int difference = max - min;
        if (difference < 0) {
                difference = difference * -1;
        }

        int range = difference;
        max++;
        int value = rand() % range + min;
        return value;
}

float random_float(float a)
{
        float x = (float)( (double)rand() / (double)(RAND_MAX/a) );
        return x;
}
