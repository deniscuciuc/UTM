#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>
#include <time.h>
#include <string.h>

/**
 * The C programming language provides a keyword called typedef, 
 * which you can use to give a type a new name. Following is an example to define a term BYTE for one-byte numbers −
 * 
 * You can use typedef to give a name to your user defined data types as well. 
 * For example, you can use typedef with structure to define a new data type and then use that data type to define structure variables directly as follows
 * We can use this to transimite data types from one variable to another...
 * 
 * TYPEDEF VS #DEFINE
 * #define is a C-directive which is also used to define the aliases for various data types similar to typedef but with the following differences:
 * 1. typedef is limited to giving symbolic names to types only where as #define can be used to define alias for values as well, q., you can define 1 as ONE etc.
 * 2. typedef interpretation is performed by the compiler whereas #define statements are processed by the pre-processor.
 * 
 * 
 * @author deniscuciuc
 *
 */

typedef struct Books {
    char title[50];
    char author[50];
   char subject[100];
   int bookID;
} Book;

int main(void) {
    
    typedef unsigned char BYTE;
    BYTE b1, b2;

    Book book;

    strcpy( book.title, "C Programming");
    strcpy( book.author, "Nuha Ali"); 
    strcpy( book.subject, "C Programming Tutorial");
    book.bookID = 6495407;
    
    printf( "Book title : %s\n", book.title);
    printf( "Book author : %s\n", book.author);
    printf( "Book subject : %s\n", book.subject);
    printf( "Book book_id : %d\n", book.bookID);

    return 0;
}