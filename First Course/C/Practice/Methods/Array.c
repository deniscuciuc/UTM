#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>


int main() {
    int *p;
    
}



/* function to generate and return random numbers */
int *getRandom() {

    static int array[10];
    
    //  set the seed
    srand( (unsigned) time(NULL));

    for (int i = 0; i < 10; ++i) {
        array[i] = rand();
        printf("array[%d] = %d\n", i, array[i]);
    }

    return array;
}