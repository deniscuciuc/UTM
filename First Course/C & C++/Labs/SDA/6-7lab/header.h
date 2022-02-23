#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <limits>
#include <string.h>
#include <conio.h>
#include <time.h>

const int SIZE_OF_STRING = 10;

struct Car {
	char model[SIZE_OF_STRING];
	char country[SIZE_OF_STRING];
	char productionDate[SIZE_OF_STRING]; // xx.xx.xxxx
	int enginePower; // x Horse Power
	float price; // x.x
};

void alocateDynamicMemoryForStructArray(struct Car*& structArray, int& arraySize);
void getsArrayElementsFromUser(struct Car* structArray, int arraySize);
void writesArrayElementsToFile(struct Car* structArray, int arraySize);
void readsArrayElementsFromFile(struct Car* structArray, int arraySize);
void displaysArrayElements(struct Car* structArray, int arraySize);

void sortsArrayElements(struct Car* structArray, int arraySize);
void bubbleSortByDescendingPrice(struct Car* structArray, int arraySize);
void bubbleSortByAscendingPrice(struct Car* structArray, int arraySize);
void bubbleSortByDescendingEnginePower(struct Car* structArray, int arraySize);
void bubbleSortByAscendingEnginePower(struct Car* structArray, int arraySize);

void searchesArrayElement(struct Car* structArray, int arraySize);
void addsNewElementToTheEnd(struct Car*& structArray, int& arraySize);
void editsArrayElement(struct Car* structArray, int arraySize);
void insertsNewArrayElement(struct Car*& structArray, int& arraySize);
void removesArrayElement(struct Car*& structArray, int& arraySize);
void freesArrayMemory(struct Car*& structArray, int& arraySize);