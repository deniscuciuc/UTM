#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include <cstdio>
#include <limits>
#include <string.h>
#include <conio.h>
#include <time.h>

#define SIZE_OF_STRUCT_STRING 15

typedef struct Car {
	char model[SIZE_OF_STRUCT_STRING];
	char country[SIZE_OF_STRUCT_STRING];
	char productionDate[SIZE_OF_STRUCT_STRING];
	int enginePower;
	float price;
	struct Car* next;
} Car;

Car* getLastNode(Car* head);
void getInfo(Car* head);
void pushBack(Car* head);
void takesNumberOfCars(Car* head, int& numberOfCars);

void addInformationAboutCars(Car*& usersCars, int& numberOfCars);
void displayInformationAboutCars(Car* usersCars, int numberOfCars);

void sortInformation(Car* usersCars, int numberOfCars);
void bubbleSortByDescendingPrice(Car* usersCars, int numberOfCars);
void bubbleSortByAscendingPrice(Car* usersCars, int numberOfCars);
void bubbleSortByDescendingEnginePower(Car* usersCars, int numberOfCars);
void bubbleSortByAscendingEnginePower(Car* usersCars, int numberOfCars);



void searchByCar(Car* usersCars, int numberOfCars);
void editInformationOfCar(Car* usersCars, int numberOfCars);



