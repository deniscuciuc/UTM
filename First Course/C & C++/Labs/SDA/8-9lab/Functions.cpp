#include "Header.h"
#pragma warning(disable : 4996)

int i;

// finds last node in list
Car* getLastNode(Car* head) {
	if (head == NULL) {
		return NULL;
	}
	while (head->next) {
		head = head->next;
	}
	return head;
}

// gets by user data for nodes
void getInfo(Car* head) {
	printf("Model: ");
	scanf("%s", &head->model);
	printf("Country: ");
	scanf("%s", &head->country);
	printf("Production Date: ");
	scanf("%s", &head->productionDate);
	printf("Engine Power: ");
	scanf("%d", &head->enginePower);
	printf("Price: ");
	scanf("%f", &head->price);
}

// adds new node to the end of list
void pushBack(Car* head) {
	Car* last = getLastNode(head);
	Car* tmp = (Car*)malloc(sizeof(Car));
	getInfo(tmp);
	tmp->next = NULL;
	last->next = tmp;
}


void takesNumberOfCars(Car* head, int& numberOfCars) {
	if (head == NULL) {
		printf("How many cars do you want to create: ");
		scanf("%d", &numberOfCars);
	}
	else {
		printf("You already created list of cars!\n");
		printf("If you want to add more cars, go to step 7.\n");
	}
}

void fillsInformationAboutAllCars(Car* head, int numberOfCars) {
	
	for (int i = 0; i < numberOfCars; i++) {
		printf("Car #%d\n", i + 1);
		printf("Model: ");
		scanf("%s", &head[i].model);
		printf("Country: ");
		scanf("%s", &head[i].country);
		printf("Production Date: ");
		scanf("%s", &head[i].productionDate);
		printf("Engine Power: ");
		scanf("%d", &head[i].enginePower);
		printf("Price: ");
		scanf("%f", &head[i].price);
		head[i].next = NULL;
	}
}


void displayInformationAboutCars(Car* usersCars, int numberOfCars) {
	if (usersCars == NULL) {
		printf("\nYou didnt create information about cars!\n");
		printf("Select option: 1\n");
	}
	else {
		printf("\n\n\n\n\t#\tMODEL\t\tCOUNTRY\t\tPRODUCTION DATE\t\tENGINE POWER\t\tPRICE\n");
		for (int i = 0; i < numberOfCars; i++) {
			printf("\t%d\t%s\t\t%s\t\t%s\t\t%d HP\t\t\t%.2f $\n", i + 1, usersCars[i].model, usersCars[i].country, usersCars[i].productionDate,
				usersCars[i].enginePower, usersCars[i].price);
		}
	}
}


void sortInformation(Car* usersCars, int numberOfCars) {
	if (usersCars == NULL) {
		printf("\nYou didnt create information about cars!\n");
		printf("Select option: 1\n");
	}
	else {
		int userChoise;
		printf("\nMenu for sorting: \n");
		printf("1. Sort car(s) by descending price\n");
		printf("2. Sort car(s) by ascending price\n");
		printf("3. Sort car(s) by descending engine power\n");
		printf("4. Sort car(s) by ascending engine power\n");
		printf("5. Exit from menu\n");
		do {
			printf("\n\n\nBy what value do you want to sort the arrays? \n");
			scanf("%d", &userChoise);

			switch (userChoise) {
			case 1:
				bubbleSortByDescendingPrice(usersCars, numberOfCars);
				displayInformationAboutCars(usersCars, numberOfCars);
				break;
			case 2:
				bubbleSortByAscendingPrice(usersCars, numberOfCars);
				displayInformationAboutCars(usersCars, numberOfCars);
				break;
			case 3:
				bubbleSortByDescendingEnginePower(usersCars, numberOfCars);
				displayInformationAboutCars(usersCars, numberOfCars);
				break;
			case 4:
				bubbleSortByAscendingEnginePower(usersCars, numberOfCars);
				displayInformationAboutCars(usersCars, numberOfCars);
				break;
			case 5:
				printf("\n\nSuccessful exit from sort menu!\n");
				return;

			default:
				printf("\nInvalid Input!");
				printf("\nPlease,try again.");
				break;
			}
		} while (userChoise != 5);
	}
}


void bubbleSortByDescendingPrice(Car* usersCars, int numberOfCars) {
	Car temp;

	for (int i = 0; i < numberOfCars - 1; i++) {
		for (int j = 0; j < (numberOfCars - 1 - i); j++) {
			if (usersCars[j].price < usersCars[j + 1].price) {
				temp = usersCars[j];
				usersCars[j] = usersCars[j + 1];
				usersCars[j + 1] = temp;
			}
		}
	}
	printf("Arrays was sorted by descending price!\n");
	return;
}

void bubbleSortByAscendingPrice(Car* usersCars, int numberOfCars) {
	Car temp;

	for (int i = 0; i < numberOfCars - 1; i++) {
		for (int j = 0; j < (numberOfCars - 1 - i); j++) {
			if (usersCars[j].price > usersCars[j + 1].price) {
				temp = usersCars[j];
				usersCars[j] = usersCars[j + 1];
				usersCars[j + 1] = temp;
			}
		}
	}
	printf("Arrays was sorted by asceding price!");
	return;
}

void bubbleSortByDescendingEnginePower(Car* usersCars, int numberOfCars) {
    Car temp;

	for (int i = 0; i < numberOfCars - 1; i++) {
		for (int j = 0; j < (numberOfCars - 1 - i); j++) {
			if (usersCars[j].enginePower < usersCars[j + 1].enginePower) {
				temp = usersCars[j];
				usersCars[j] = usersCars[j + 1];
				usersCars[j + 1] = temp;
			}
		}
	}
	printf("Arrays was sorted by descending engine power!\n");
	return;
}

void bubbleSortByAscendingEnginePower(Car* usersCars, int numberOfCars) {
	Car temp;

	for (int i = 0; i < numberOfCars - 1; i++) {
		for (int j = 0; j < (numberOfCars - 1 - i); j++) {
			if (usersCars[j].enginePower > usersCars[j + 1].enginePower) {
				temp = usersCars[j];
				usersCars[j] = usersCars[j + 1];
				usersCars[j + 1] = temp;
			}
		}
	}
	printf("Arrays was sorted by ascending engine power!\n");
	return;
}

void searchByCar(Car* usersCars, int numberOfCars) {
	if (usersCars == NULL) {
		printf("\nYou didnt create information about cars!\n");
		printf("Select option: 1\n");
	}
	else {
		char findCar[SIZE_OF_STRUCT_STRING];

		printf("\n\nEnter the model to be found: ");
		scanf("%s", findCar);

		if (strcmp(findCar, usersCars[i].model) == 0) {
			printf("\nThis model exists: \n");
			printf("Model: %s\nCountry: %s\nProduction Date: %s\nEngine Power: %d HP\nPrice: %.2f $",
				usersCars[i].model,
				usersCars[i].country, usersCars[i].productionDate,
				usersCars[i].enginePower, usersCars[i].price);
		}
		else {
			printf("\nThere are no such model!");
		}
	}
	return;
}

void editInformationOfCar(Car* usersCars, int numberOfCars) {
	if (usersCars == NULL) {
		printf("\nThere is nothing to edit!");
		printf("\nSelect option: 1");
	}
	else {
		int indexOfCar;

		do {
			printf("\nCar you want to edit: ");
			scanf("%d", &indexOfCar);

			if (indexOfCar <= 0) {
				printf("Index of car cant be negativ or zero!\n");
				printf("Please, try again.");
			}
		} while (indexOfCar > numberOfCars || indexOfCar <= 0);

		printf("\nEditing element #%d", indexOfCar);

		printf("\nNew model: ");
		scanf("%s", usersCars[indexOfCar - 1].model);

		printf("New country: ");
		scanf("%s", usersCars[indexOfCar - 1].country);

		printf("New production date: ");
		scanf("%s", usersCars[indexOfCar - 1].productionDate);

		printf("New engine power: ");
		scanf("%d", &usersCars[indexOfCar - 1].enginePower);

		printf("New price: ");
		scanf("%f", &usersCars[indexOfCar - 1].price);
	}
}   


