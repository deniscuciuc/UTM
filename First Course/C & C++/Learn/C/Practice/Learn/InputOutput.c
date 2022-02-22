#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>
#include <time.h>
#include <string.h>

 void takeValuesFromUser();
 void getCharFromUser();
 void takeValuesThroughScanf();

int main(void) {
    getCharFromUser();
    takeValuesFromUser();
    takeValuesThroughScanf();
    return 0;
}

/*  The char *gets(char *s) function reads a line from stdin into the buffer pointed to by s until either a terminating newline or EOF (End of File).

    The int puts(const char *s) function writes the string 's' and 'a' trailing newline to stdout. 
*/
void getCharFromUser() {
    char input[100];

    printf( "\nEnter a value :");
    gets(input);

    printf( "\nYou entered: ");
    puts(input);
}

void takeValuesFromUser() {
    int valueInt, valueChar;

    // Get char transform char to int
    printf("Enter a value: ");
    valueInt = getchar();

    printf("You entered: ");
    putchar(valueInt);
}

void takeValuesThroughScanf() {
    char inputChar[100];
    int inputInt;

    printf("\nEnter a value: ");
    scanf("%s %d", inputChar, &inputInt);

    printf("\n You've entered: %s and %d", inputChar, inputInt);


}