#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>
#include <time.h>
#include <string.h>
/**
 *  C supports a wide range of functions that manipulate null-terminated strings:
 * 
 *      - strcpy(s1, s2) - Copies string s2 into string s1.
 *      - strcat(s1, s2) - Concatenates string s2 onto the end of string s1.
 *      - strlen(s1) - Returns the length of string s1.
 *      - strcmp(s1, s2) - Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.
 *      - strchr(s1, ch) - Returns a pointer to the first occurrence of character ch in string s1.
 *      - strstr(s1, s2) - Returns a pointer to the first occurrence of string s2 in string s1.
 *  
 */
int main(void) {

    char greeting[6] = {'H', 'e', 'l', 'l', 'o'};
    printf("Greeting message: %s\n", greeting);

    char str1[12] = "Hello";
    char str2[12] = "Hello";
    char str3[12];
    int  len, returns;

    strcpy(str3, str1);   // copy str1 into str3
    printf("Used: strcpy( str3, str1) :  %s\n", str3 );

    strcat(str1, str2); // concatenate str2 onto the end of str1
    printf("Used: strcat( str1, str2):   %s\n", str1 );

    len = strlen(str1); // total length of str1 after concatenate
    printf("Used: strlen(str1) :  %d\n", len);

    returns = strcmp(str1, str2);
    printf("Used: strcmp(str1, str2): %d\n", returns);
    return 0;

}