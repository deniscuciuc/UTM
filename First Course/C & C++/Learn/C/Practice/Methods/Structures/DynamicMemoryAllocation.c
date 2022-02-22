#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>
#include <malloc.h>
#include <locale.h>

void memoryAllocationForOneDimensionalArray();

/**
 * Функции динамического распределения памяти:
 *  1. void* malloc(РазмерМассиваВБайтах);
 *  2. void* calloc(ЧислоЭлементов, РазмерЭлементаВБайтах);
 * @return int 
 */

int main() {
    memoryAllocationForOneDimensionalArray();
    return 0;
}

void memoryAllocationForOneDimensionalArray() {
    int *a; // point to array
    int i, n;
    printf("Enter here array's size: ");
    scanf("%d", &n);
    // Выделение памяти
    a = (int*)malloc(n * sizeof(int));
    // Ввод элементов массива
    for (i = 0; i<n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    // Вывод элементов массива
    for (i = 0; i<n; i++)
        printf("%d ", a[i]);
    free(a);
    getchar();   getchar();
    return 0;

}
