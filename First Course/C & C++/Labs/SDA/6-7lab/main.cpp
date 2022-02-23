#include "Header.h"

int main()
{
	struct Car* userArray = NULL;
	int userChoise, numberOfStructs;

	printf("\nMenu:\n");
	printf("1.Dynamic memory allocation for an array of struct\n");
	printf("2.Enter array elements from keyboard\n");
	printf("3.Writing an array of structures in .txt file\n");
	printf("4.Reading an array of structures from a file .txt\n");
	printf("5.Display array elements\n");
	printf("6.Sort array elements (4 options)\n");
	printf("7.Search for an array element\n");
	printf("8.Add new element to the end\n");
	printf("9.Edit array element\n");
	printf("10.Insert a new element\n");
	printf("11.Remove an array element\n");
	printf("12.Free the memory allocated to the array\n");
	printf("13.End program\n");

	do {
		printf("\n\n\nSelect the operation you want to perform: ");
		scanf("%d", &userChoise);
		
		switch (userChoise) {
			case 1: // works
				alocateDynamicMemoryForStructArray(userArray, numberOfStructs);
				break;
			case 2: // works
				getsArrayElementsFromUser(userArray, numberOfStructs);
				break;
			case 3: // works
				writesArrayElementsToFile(userArray, numberOfStructs);
				break;
			case 4: // works
				readsArrayElementsFromFile(userArray, numberOfStructs);
				break;
			case 5: // works
				displaysArrayElements(userArray, numberOfStructs);
				break;
			case 6: // works
				sortsArrayElements(userArray, numberOfStructs);
				break;
			case 7: // works
				searchesArrayElement(userArray, numberOfStructs);
				break;
			case 8: // works
				addsNewElementToTheEnd(userArray, numberOfStructs);
				break;
			case 9: // works
				editsArrayElement(userArray, numberOfStructs);
				break;
			case 10: // works
				insertsNewArrayElement(userArray, numberOfStructs);
				break;
			case 11: // works
				removesArrayElement(userArray, numberOfStructs);
				break;
			case 12: // works
				freesArrayMemory(userArray, numberOfStructs);
				break;
			case 13: // works
				if (userArray != NULL) {
					freesArrayMemory(userArray, numberOfStructs);
				}
				printf("\nYou have successfully stopped the program!\n\n\n\n");
				break;
			default:
				printf("Invalid Input!");
				break;
		}
	} while (userChoise != 13);

}