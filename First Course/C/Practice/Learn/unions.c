#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>
#include <time.h>
#include <string.h>

union dataBase {
    int i;
    float f;
    char str[20];
};

int main(void) {

    union dataBase data;

   printf( "Memory size occupied by data : %d\n", sizeof(data));

   
    // Need to print i before change another values from union
   data.i = 20;
   printf( "data.i : %d\n", data.i);
   
   data.f = 220.5;
   printf( "data.f : %f\n", data.f);
   
   strcpy( data.str, "C Programming");
   printf( "data.str : %s\n", data.str);


   return 0;

}