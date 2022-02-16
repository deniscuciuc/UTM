#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>

// function declaration
int *getRandomValuesInOneDimensionalArray();
double getAverageNumberAndSumInOneDimensionalArray(int *array, int size);


int main() {
    
    // getRandomValuesInOneDimensionalArray
    static int array[10];
    getRandomValuesInOneDimensionalArray(array);
    


    return 0;
    
}



/* function to generate and return random numbers in 1d array */
int * getRandomValuesInOneDimensionalArray(int array[]) {
    //  set the seed
    srand( (unsigned) time(NULL));

    for (int i = 0; i < 10; ++i) {
        array[i] = rand();
        printf("array[%d] = %d\n", i, array[i]);
    }

    int *p = array;
    for (int i = 0; i < 10; i++) {
        printf( "*(p + %d) : %d\n", i, *(p + i));
    }

    return array;
}

double getAverageNumberAndSumInOneDimensionalArray(int *array, int size) {
    int sum = 0;
    double avg;

    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }

    avg = (double)sum / size;
    return avg;
}