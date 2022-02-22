#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>
#include <time.h>


int pointerToPointers();
void getSecondsPoint(unsigned long *par);
double getAverageNumberAndSumInOneDimensionalArray(int *array, int size);


int main(void) {

    /* an int array with 5 elements */
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;
 
   /* pass pointer to the array as an argument */
   avg = getAverageNumberAndSumInOneDimensionalArray(balance, 5) ;
 
   /* output the returned value  */
   printf("Average value is: %f\n", avg );
    pointerToPointers();
    return 0;
}

// use this fro transmiting variable value through one point to another
int pointerToPointers() {
    int var = 3000; 
    int *ptr;
    int **pptr;

    ptr = &var;
    pptr = &ptr;

    /* take the value using pptr */
   printf("Value of var = %d\n", var );
   printf("Value available at *ptr = %d\n", *ptr );
   printf("Value available at **pptr = %d\n", **pptr);

   unsigned long seconds;
   getSecondsPoint(&seconds);

   printf("Numbers of seconds: %ld\n", seconds);
   printf("Number of seconds avaible at: %x\n", seconds);

   return 0;
}


void getSecondsPoint(unsigned long *par) {
    *par = time(NULL);
    return;
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