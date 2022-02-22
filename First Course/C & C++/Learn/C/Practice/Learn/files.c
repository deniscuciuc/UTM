#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>
#include <time.h>
#include <string.h>

/**
 * r - Opens an existing text file for reading purpose.
 * w - Opens a text file for writing. If it does not exist, then a new file is created. Here your program will start writing content from the beginning of the file.
 * a - Opens a text file for writing in appending mode. If it does not exist, then a new file is created. Here your program will start appending content in the existing file content.
 * r+ - Opens a text file for both reading and writing.
 * w+ - Opens a text file for both reading and writing. It first truncates the file to zero length if it exists, otherwise creates a file if it does not exist.
 * a+ - Opens a text file for both reading and writing. It creates the file if it does not exist. The reading will start from the beginning but writing can only be appended.
 * 
 * @return int 
 */

int main(void) {

    FILE *fp;
   char buff[255];

   fp = fopen("/tmp/test.txt", "r");
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );

   fgets(buff, 255, (FILE*)fp);
   printf("2: %s\n", buff );
   
   fgets(buff, 255, (FILE*)fp);
   printf("3: %s\n", buff );
   fclose(fp);

    return 0;

}