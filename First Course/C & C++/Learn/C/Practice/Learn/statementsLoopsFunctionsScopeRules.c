#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    ifElseTest(5, 13);
    switchTest();
    loopsTest();
    return 0;
}

int ifElseTest(int x, int y) {
    int count = 0,
        z = 6;

    if (z == 5) {
        printf("Here is x: %d\n", x);
    } else if (z <= 25){
        printf("Here is x and y: %d, %d\n", x, y);
    } else {
        printf("Here is y: %d\n", y);
    }
    return 0;
}

int switchTest() {
    int z = 5;

    switch (z)
    {
    case 1:
    printf("z is 1");
    break;
    case 2:
    printf("z is 2");
    break;
    case 3:
    printf("z is 3");
    break;
    case 4:
    printf("z is 4");
    break;
    case 5:
    printf("z is 5");
    break;
    default:
    printf("We dont know, whats value have z");
    break;
    }
    return 0;
}

int loopsTest() {
    int x = 5,
        y = 12,
        count = 0;

    bool b,c;

    
    for (int i = 0; i < 10; i++) {
        count++;
        printf("%d\n", count);
    }
    return 0;

    /* for ( ; ; ) {
            infinite loop
            NOTE − You can terminate an infinite loop by pressing Ctrl + C keys.
    } */
}