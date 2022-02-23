#include "Header.h"

FILE* structArrayStorageFile;
int i, elementToRemove;


void alocateDynamicMemoryForStructArray(struct Car*& structArray, int& arraySize) {
	if (structArray == NULL) {
		do {
			printf("\n\n Type here size of array: ");
			scanf("%d", &arraySize);
		} while (arraySize <= 0);

		structArray = new Car[arraySize];
		int structArrayAllocatedMemory = arraySize * sizeof(Car);

		if (structArray == NULL) {
			printf("\nDynamic memory is not allocated for an array. There are no values...\n Please fill array!");
		}
		else {
			printf("\nMemory was succesfully allocated!");
			printf("\nAllocated memory for array: %d bytes", structArrayAllocatedMemory);
		}
	}
	else {
		printf("\nMemory already was allocated for struct!\n");
	}

	return;
}


void getsArrayElementsFromUser(struct Car* structArray, int arraySize) {
	if (structArray == NULL) {
		printf("Your array doesn't have a dedicated memory!\nPlease go through the procedure of the first menu operation\n");
		printf("Select option: 1");
	}
	else {
		printf("\nEnter value for each struct array:");
		for (int i = 0; i < arraySize; i++) {
			printf("\nInformation for the car #%d:", i + 1);
			fgetc(stdin);

			printf("\nModel: ");
			scanf("%s", &structArray[i].model);

			printf("Country: ");
			scanf("%s", &structArray[i].country);

			printf("Production Date (xx.xx.xxxx): ");
			scanf("%s", &structArray[i].productionDate);

			printf("Engine Power (HP): ");
			scanf("%d", &structArray[i].enginePower);

			printf("Price ($): ");
			scanf("%f", &structArray[i].price);

			if (i < arraySize - 1) {
				printf("\nEnter values for next array: \n");
			}
		}
	}
}

void writesArrayElementsToFile(struct Car* structArray, int arraySize) {
	if (structArray == NULL) {
		printf("You have no arrays to writes them in file!\n");
		printf("Select option: 2");
	}
	else {
		structArrayStorageFile = fopen("cars.txt", "w");

		for (int i = 0; i < arraySize; i++) {
			fprintf(structArrayStorageFile, "\nModel: %s \nCountry: %s \nEngine Power: %s \n%d Horse Power \nPrice: %.2f $\n",
				structArray[i].model, structArray[i].country, structArray[i].productionDate,
				structArray[i].enginePower, structArray[i].price);
		}
		fclose(structArrayStorageFile);
	}
}

void readsArrayElementsFromFile(struct Car* structArray, int arraySize) {
		structArrayStorageFile = fopen("cars.txt", "r");
			for (int i = 0; i < arraySize; i++) {
				fscanf(structArrayStorageFile, "%s %s %s %d %f\n", structArray[i].model,
					structArray[i].country, structArray[i].productionDate,
					structArray[i].enginePower, structArray[i].price);
			}
			printf("%s %s %s %d %.2f\n", structArray[i].model,
				structArray[i].country, structArray[i].productionDate,
				structArray[i].enginePower, structArray[i].price);

			fclose(structArrayStorageFile);
			printf("You have successfully read the file!");
}

void displaysArrayElements(struct Car* structArray, int arraySize) {
	if (structArray == NULL) {
		printf("You have no array to display!\n");
		printf("Select option: 2");
	}
	else {
		printf("\n\n\n\n\tMODEL\t\tCOUNTRY\t\tPRODUCTION DATE\t\tENGINE POWER\t\tPRICE\n");

		for (int i = 0; i < arraySize; i++) {
			printf("\t%s\t\t%s\t\t%s\t\t%d HP\t\t\t%.2f $\n", structArray[i].model, structArray[i].country, structArray[i].productionDate,
				structArray[i].enginePower, structArray[i].price);
		}
	}
}

void sortsArrayElements(struct Car* structArray, int arraySize) {
	if (structArray == NULL && arraySize < 1) {
		printf("Your array doesn't have a dedicated memory!.Please go through the procedure of the first menu operation\n");
		printf("Select option: 1");
	}
	else {
		int userChoise;
		printf("\nMenu for sorting: \n");
		printf("1. Sort array(s) by descending price\n");
		printf("2. Sort array(s) by ascending price\n");
		printf("3. Sort array(s) by descending engine power\n");
		printf("4. Sort arrray(s) by ascending engine power\n");
		printf("5. Exit from this menu\n");
		do {
			printf("\n\n\nBy what value do you want to sort the arrays? \n");
			scanf("%d", &userChoise);

			switch (userChoise) {
			case 1:
				bubbleSortByDescendingPrice(structArray, arraySize);
				displaysArrayElements(structArray, arraySize);
				break;
			case 2:
				bubbleSortByAscendingPrice(structArray, arraySize);
				displaysArrayElements(structArray, arraySize);
				break;
			case 3:
				bubbleSortByDescendingEnginePower(structArray, arraySize);
				displaysArrayElements(structArray, arraySize);
				break;
			case 4:
				bubbleSortByAscendingEnginePower(structArray, arraySize);
				displaysArrayElements(structArray, arraySize);
				break;
			case 5:
				printf("\n\nSuccessful exit from sort menu!\n");
				return;

			default:
				printf("\nInvalid Input!");
				break;
			}
		} while (userChoise != 5);

	}

}

void bubbleSortByDescendingPrice(struct Car* structArray, int arraySize) {
	struct Car temp;

	for (int i = 0; i < arraySize - 1; i++) {
		for (int j = 0; j < (arraySize - 1 - i); j++) {
			if (structArray[j].price < structArray[j + 1].price) {
				temp = structArray[j];
				structArray[j] = structArray[j + 1];
				structArray[j + 1] = temp;
			}
		}
	}
	printf("Arrays was sorted by descending price!\n");
	return;
}

void bubbleSortByAscendingPrice(struct Car* structArray, int arraySize) {
	struct Car temp;

	for (int i = 0; i < arraySize - 1; i++) {
		for (int j = 0; j < (arraySize - 1 - i); j++) {
			if (structArray[j].price > structArray[j + 1].price) {
				temp = structArray[j];
				structArray[j] = structArray[j + 1];
				structArray[j + 1] = temp;
			}
		}
	}
	printf("Arrays was sorted by asceding price!");
	return;
}

void bubbleSortByDescendingEnginePower(struct Car* structArray, int arraySize) {
	struct Car temp;

	for (int i = 0; i < arraySize - 1; i++) {
		for (int j = 0; j < (arraySize - 1 - i); j++) {
			if (structArray[j].enginePower < structArray[j + 1].enginePower) {
				temp = structArray[j];
				structArray[j] = structArray[j + 1];
				structArray[j + 1] = temp;
			}
		}
	}
	printf("Arrays was sorted by descending engine power!\n");
	return;
}

void bubbleSortByAscendingEnginePower(struct Car* structArray, int arraySize) {
	struct Car temp;

	for (int i = 0; i < arraySize - 1; i++) {
		for (int j = 0; j < (arraySize - 1 - i); j++) {
			if (structArray[j].enginePower > structArray[j + 1].enginePower) {
				temp = structArray[j];
				structArray[j] = structArray[j + 1];
				structArray[j + 1] = temp;
			}
		}
	}
	printf("Arrays was sorted by ascending engine power!\n");
	return;
}




void searchesArrayElement(struct Car* structArray, int arraySize) {
	if (structArray == NULL && arraySize < 1) {
		printf("Your array doesn't have a dedicated memory!.Please go through the procedure of the first menu operation\n");
		printf("Select option: 1");
	}
	else {
		char findElementInArray[15];
		printf("\n\n Enter the value model to be found: ");
		scanf("%s", findElementInArray);

		if (strcmp(findElementInArray, structArray[i].model) == 0) {
			printf("\nThis model exists: \n");
			printf("Model: %s\nCountry: %s\nProduction Date: %s\nEngine Power: %d HP\nPrice: %.2f $",
				structArray[i].model,
				structArray[i].country, structArray[i].productionDate,
				structArray[i].enginePower, structArray[i].price);
		}
		else {
			printf("\n Error, there are no such model!");
		}
	}
	return;
}

void addsNewElementToTheEnd(struct Car*& structArray, int& arraySize) {
	if (structArray == NULL) {
		printf("Your array doesn't have a dedicated memory!.Please go through the procedure of the first menu operation\n");
		printf("Select option: 1");
	}
	else {
		Car* tempArray = new Car[arraySize];

		for (int i = 0; i < arraySize; i++) {
			tempArray[i] = structArray[i];
		}

		arraySize += 1;
		delete[] structArray;
		structArray = new Car[arraySize];

		for (int i = 0; i < arraySize - 1; i++) {
			structArray[i] = tempArray[i];
		}

		int i = arraySize - 1;
		printf("Adds %d element: \n", i);

		printf("Model: ");
		scanf("%s", structArray[i].model);

		printf("Country: ");
		scanf("%s", structArray[i].country);

		printf("Production Date: ");
		scanf("%s", structArray[i].productionDate);

		printf("Engine Power: ");
		scanf("%d", &structArray[i].enginePower);

		printf("Price: ");
		scanf("%f", &structArray[i].price);

		printf("\n\n New element was added to the end!\n");

	}
	return;
}

void editsArrayElement(struct Car* structArray, int arraySize) {
	if (structArray == NULL) {
		printf("\nThere is nothing to edit!");
		printf("\nCreate structures by selecting option: 2");
	}
	else {
		int indexElement;
		do {
			printf("\nElement you want to edit: ");
			scanf("%d", &indexElement);
		} while (indexElement > arraySize || indexElement <= 0);

		printf("\nEditing element #%d", indexElement);

		printf("\nNew model: ");
		scanf("%s", structArray[indexElement - 1].model);

		printf("New country: ");
		scanf("%s", structArray[indexElement - 1].country);

		printf("New production date: ");
		scanf("%s", structArray[indexElement - 1].productionDate);

		printf("New engine power: ");
		scanf("%d", &structArray[indexElement - 1].enginePower);

		printf("New price: ");
		scanf("%f", &structArray[indexElement - 1].price);
	}
}

void insertsNewArrayElement(struct Car*& structArray, int& arraySize) {
	if (structArray == NULL) {
		printf("Memory was not allocated!");
		printf("Please, select option: 1");
	}
	else {
		int indexElement;
		printf("Select which place you want to insert the new element");

		do {
			printf("\nYour choice: ");
			scanf("%d", &indexElement);
		} while (indexElement > arraySize || indexElement <= 0);

		Car* tempArray = new Car[arraySize];

		for (int i = 0; i < arraySize; i++) {
			tempArray[i] = structArray[i];
		}

		arraySize += 1;

		delete[] structArray;

		structArray = new Car[arraySize];

		int structArrayIndex = 0;

		int tempArrayIndex = 0;

		while (structArrayIndex < indexElement - 1) {

			structArray[structArrayIndex] = tempArray[tempArrayIndex];
			structArray++;
			tempArrayIndex++;

		}

		structArrayIndex++;

		while (structArrayIndex < arraySize) {

			structArray[structArrayIndex] = tempArray[tempArrayIndex];

			structArrayIndex++;

			tempArrayIndex++;

		}

		int i = indexElement - 1;

		printf("Working with %d element: \n", i + 1);


		printf("Model:");
		scanf("%s", structArray[i].model);

		printf("Country:");
		scanf("%s", structArray[i].country);

		printf("Production date: ");
		scanf("%s", structArray[i].productionDate);

		printf("Engine Power: ");
		scanf("%d", &structArray[i].enginePower);

		printf("Price: ");
		scanf("%f", &structArray[i].price);

		printf("An element was added succesfully!\n");
	}
}

void removesArrayElement(struct Car*& structArray, int& arraySize) {
	if (structArray == NULL) {
		printf("\nThere is nothing to remove!");
		printf("\nCreate elements: Option 2");
	}
	else {
		int indexElement;

		do {
			printf("\nElement you want to remove: ");
			scanf("%d", &indexElement);
		} while (indexElement > arraySize || indexElement <= 0);
		
		Car* tempArray = new Car[arraySize];
		for (int i = 0; i < arraySize; i++) {
			tempArray[i] = structArray[i];
		}

		arraySize = arraySize - 1;
		delete[] structArray;

		structArray = new Car[arraySize];

		int structArrayIndex = 0, tempArrayIndex = 0;
		while (tempArrayIndex < indexElement - 1) {
			structArray[structArrayIndex] = tempArray[tempArrayIndex];
			structArrayIndex++;
			tempArrayIndex++;
		}

		tempArrayIndex++;

		while (structArrayIndex < arraySize + 1) {

			structArray[structArrayIndex] = tempArray[tempArrayIndex];
			structArrayIndex++;
			tempArrayIndex++;

		}
		printf("The element was successfully deleted!\n");

	}
}

void freesArrayMemory(struct Car*& structArray, int& arraySize) {

	if (structArray != NULL) {

		delete[] structArray;
		structArray = NULL;
		arraySize = 0;

		printf("\nThe array memory has been successfully freed!");
	}
	else {
		printf("\nThere is nothing to free!");
	}
	return;

}