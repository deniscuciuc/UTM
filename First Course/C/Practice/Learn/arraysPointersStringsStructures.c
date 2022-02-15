#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>

#define ROW 2
#define COL 3

/* function declaration */
double getAverage(int array[], int size);

int main() {

    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;

   /* pass pointer to the array as an argument */
   avg = getAverage(balance, 5);
 
   /* output the returned value */
   printf("Average value is: %f\n", avg);
    
   
    arraysTest();
    return 0;
}

int arraysTest() {
    // in C arrays shot be initilize with static numbers of how many elements do they have in array
   int array[10];
   
   for (int i = 0; i < 10; i++) {
       array[i] = i + 100;
   }

   for (int j = 0; j < 10; j++) {
       printf("Element[%d] = %d\n", j, array[j] );
   }

   return 0;

}

int multiDimensionaArrays() {

    // 3d array
    int threeDArray[5][10][4];

    // 2d Array
    int twoDimensionalArray[3][4] = {
        // columns  - 4
        {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
        {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
        {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
    };
    
    int twoDimensionalArrayTest[ROW][COL] = {
        {0, 2, 3},
        {1, 5, 12}
    };

}

/**
 *  3 ways to pass parametres:
 *      1. int *array
 *      2. int array[size] (10 for example)
 *      3. int array[] (unsized array)
 * 
 * @return int 
 */

int arraysPassing() {
    
}

double getAverage(int array[], int size) {
    double avg, sum = 0;

    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    avg = sum / size;
    
    return avg;

}