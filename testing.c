#include <stdio.h>

#include "testing.h"

// Include all files that need to be tested.
#include "random.h"

void testing()
{
        printf("Testing files OK.\n");
}

void test_rand_interval(int count, int min, int max)
{
        printf("Displaying %d calls of rand_interval(%d, %d)\n", count, min, max);

        for (int i = 0; i < count; i++) {
                int value = rand_interval(min, max);
                printf("%d\n", value);
        }
}


void run_tests()
{
        test_rand_interval(10, -5, 5);
}
