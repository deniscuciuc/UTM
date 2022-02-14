#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

static int count = 5; // here is global variable

int main() {
    // Represent how bytes hava any data type
    dataTypesValuesInteger();
    dataTypesValuesFloating();

    // Standart operations with variables,constants and storage classes
    operationsWithVariables();
    operationsWithConstans();

    return 0;
}

int dataTypesValuesInteger() {


    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

    return 0;
}


int dataTypesValuesFloating() {


    printf("Storage size for float : %d \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );

    return 0;
}


int operationsWithVariables() {
    int i = 5,
        j = 1,
        k = 2;
    char c = 'H', 
        ch = 'M';
    float f = 2.14f, salary = 2142.15f;
    double pi = 3.14;

    printf("Here is the message for you: \n");
    printf("%cello %cark \n", c, ch);

    printf("Here is your salary: %f\n", salary);
    printf("Here is value of the pi: %d\n", pi);
}


int operationsWithConstans() {
    int area = LENGTH * WIDTH;
    printf("Value of area is: %d cm", area);
    printf("%c", NEWLINE);

    // Another way to use constants
    const int LENGTH_RECTANGLE = 15, WIDTH_RECTANGLE = 5;
    int areaRectangle = LENGTH_RECTANGLE * WIDTH_RECTANGLE;
    printf("Area Rectangle have: %d cm", areaRectangle);
    printf("%c", NEWLINE);
    return 0;
}
/**
 * A storage class defines the scope (visibility) and life-time of variables and/or functions within a C Program. 
 * They precede the type that they modify. We have four different storage classes in a C program:
 *  - auto = > storage class is the default storage class for all local variables.'auto' can only be used within functions, i.e., local variables.
 *  - register = > The register storage class is used to define local variables that should be stored in a register instead of RAM. 
 *                  This means that the variable has a maximum size equal to the register size (usually one word) and can't have the unary '&' operator applied to it (as it does not have a memory location).
 *                  The register should only be used for variables that require quick access such as counters. 
 *                  It should also be noted that defining 'register' does not mean that the variable will be stored in a register.
 *                  It means that it MIGHT be stored in a register depending on hardware and implementation restrictions.
 *  - static
 *  - extern
 * 
 * @return int 
 */
int operationsWithStorageClasses() {
        int mounth;
        auto int mounth;
        register int miles;
        

}