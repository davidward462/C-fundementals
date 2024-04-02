#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_int(int range, int min)
{
        int value = rand() % range + min;
        return value;
}

int main()
{
        // seed random function
        srand(time(NULL));

        return 0;
}
