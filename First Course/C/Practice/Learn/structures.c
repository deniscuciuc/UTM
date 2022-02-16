#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>
#include <time.h>
#include <string.h>

// Bit Fields allow the packing of data in a structure.
struct {
   unsigned int f1:1;
   unsigned int f2:1;
   unsigned int f3:1;
   unsigned int f4:1;
   unsigned int type:4;
   unsigned int my_int:9;

};

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int bookID;
};

void printInfoAboutBook(struct Books book);
void printInfoAboutBookWithPointer(struct Books *book);

int main(void) {
    // Declare first and second book of type Books
    struct Books firstBook;
    struct Books secondBook;
    struct Books thirdBook;

    strcpy(firstBook.title, "C++ Programming");
    strcpy(firstBook.author, "Stiven Prata");
    strcpy(firstBook.subject, "C++ Programming Tutorial");
    firstBook.bookID = 6451237;

    strcpy(secondBook.title, "C Programming");
    strcpy(secondBook.author, "Polykov");
    strcpy(secondBook.subject, "C Programming Tutorial");
    secondBook.bookID = 2153243;

    strcpy(thirdBook.title, "Thinking in Java");
    strcpy(thirdBook.author, "Uknown");
    strcpy(thirdBook.subject, "Learn OOP and Java");
    thirdBook.bookID = 123214;

    /* print firstBook info */
    printf("First Book info: \n");
   printf( "Title : %s\n", firstBook.title);
   printf( "Author : %s\n", firstBook.author);
   printf( "Subject : %s\n", firstBook.subject);
   printf( "Book ID : %d\n", firstBook.bookID);

   /* print secondBook info */\
   printf("Second Book info: \n");
   printf( "Title : %s\n", secondBook.title);
   printf( "Author : %s\n", secondBook.author);
   printf( "Subject : %s\n", secondBook.subject);
   printf( "Book ID : %d\n", secondBook.bookID);

   printInfoAboutBook(thirdBook);

   printInfoAboutBookWithPointer(&firstBook);

   return 0;
}

void printInfoAboutBook(struct Books book) {
    printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.bookID);
}

void printInfoAboutBookWithPointer(struct Books *book) {
    printf( "Book title : %s\n", book->title);
   printf( "Book author : %s\n", book->author);
   printf( "Book subject : %s\n", book->subject);
   printf( "Book book_id : %d\n", book->bookID);
   return;
}


