#include "Header.h"
#pragma warning(disable : 4996)

int i;

void addInformationAboutCars(Car*& usersCars, int& numberOfCars) {

	do {
		printf("Enter the number of information about cars to create: ");
		scanf_s("%d", &numberOfCars);

		if (numberOfCars <= 0) {
			printf("Number cant be negative or zero!\n");
			printf("Please, try again.\n");
		}
	} while (numberOfCars <= 0);

	usersCars = (Car*)malloc(numberOfCars * sizeof(Car));

	printf("Enter features of the each car: \n");
	for (int i = 0; i < numberOfCars; i++) {
		printf("Car #%d\n", i + 1);
		printf("Model: ");
		scanf("%s", &usersCars[i].model);
		printf("Country: ");
		scanf("%s", &usersCars[i].country);
		printf("Production Date: ");
		scanf("%s", &usersCars[i].productionDate);
		printf("Engine Power: ");
		scanf("%d", &usersCars[i].enginePower);
		printf("Price: ");
		scanf("%f", &usersCars[i].price);
		usersCars[i].next = NULL;
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

void addNewCar(Car* usersCars, int& numberOfCars) {
	int userChoise;
	printf("\nAdding new car: \n");
	printf("1. Insert new car at the beginning\n");
	printf("2. Add to the end of lists\n");
	printf("3. Insert new car at the middle\n");
	printf("4. Exit from this menu.\n");
	do {
		printf("\n\n\nSelect option: \n");
		scanf("%d", &userChoise);

		switch (userChoise) {
		case 1:
			
			break;
		case 2:
			
			break;
		case 3:
			
			break;
		case 4:
			
			break;
		default:
			printf("\nInvalid Input!");
			printf("\nPlease,try again.");
			break;
		}
	} while (userChoise != 4);
}
