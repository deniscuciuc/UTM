#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>

#define ROW 2
#define COL 3

const int MAX = 3;

/* function declaration */
double getAverage(int array[], int size);
int testPointersIncrement(int array[]), arrayOfPointers(int array[]);

int main() {

    int balance[5] = {1000, 2, 3, 17, 50};
    int arrayTest[3] = {10, 100, 200};
    double avg;

   /* pass pointer to the array as an argument */
   avg = getAverage(balance, 5);
 
   /* output the returned value */
   printf("Average value is: %f\n", avg);
    
    arraysTest();
    learnAboutPointers();
    arrayOfPointers(arrayTest);
    testPointersIncrement(arrayTest);
    pointersComparisons(arrayTest);
    
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

int learnAboutPointers() {
    int    *ip;    /* pointer to an integer */
    double *dp;    /* pointer to a double */
    float  *fp;    /* pointer to a float */
    char   *ch;     /* pointer to a character */

    int var = 20;
    ip = &var; // store adress of var in pointer variable

    printf("Address of var variable: %x\n", &var  );

    /* address stored in pointer variable */
    printf("Address stored in ip variable: %x\n", ip );

    /* access the value using the pointer */
    printf("Value of *ip variable: %d\n", *ip );

    int *ptr = NULL;

    printf("The values of ptr is : %x\n", ptr);

    return 0;
}


int testPointersIncrement(int array[]) {
    
    int *ptr;

    // we have addres in pointer
    ptr = array;

    // also we can use decremting a pointer
    for (int i = 0; i < MAX; i++) {
        printf("Addres of array[%d] = %x\n", i, ptr);
        printf("Value of array[%d] = %d\n", i, *ptr);

        // move to next location
        ptr++;
    }

    return 0;


}

int pointersComparisons(int array[]) {
    int *gtr, i = 0;
    
    gtr = array;

    while (gtr <= array[MAX - 1]) {
        printf("Address of var[%d] = %x\n", i, gtr );
        printf("Value of var[%d] = %d\n", i, *gtr );

        /* point to the next location */
        gtr++;
        i++;
    }
    return 0;
}

int arrayOfPointers(int array[]) {
    int i, *ptr[MAX];

    for (i = 0; i < MAX; i ++) {
        ptr[i] = &array[i]; // assign the addres of integer for each int element from array
    }

    for (i = 0; i < MAX; i ++) {
        printf("Value of array[%d] = %d\n", i, *ptr[i] );
    }
}


