#include "Header.h"

int main(void) {
	Car* usersCars = NULL;
	int userMenuChoise, numberOfCars = 0;

	printf("\nCar store data menu:\n");
	printf("1.Add information about cars\n"); // memory alocating and data entry
	printf("2.Display information about cars\n"); // display tabel 
	printf("3.Sort information\n"); // sort by 2-4 options
	printf("4.Search by car\n"); // search
	printf("5.Edit information about cars\n"); // edit
	printf("6.Swap the information of two cars\n"); // swap 2 elements
	printf("7.Add new car information\n"); // to the end or insert
	printf("8.Delete information about the car\n"); // by index
	printf("9.Find out the number of features of the car\n"); // number of elements - 1 (node next)
	printf("10.Split the Car list in two\n");
	printf("11.Merge two Car lists\n");
	printf("12.Determining the address of the last car list\n");
	printf("13.Write Car(s) data to the file\n"); // cvs
	printf("14.Read Car(s) data from the file\n"); // cvs
	printf("15.Delete all cars data\n"); // free
	printf("16.End program\n"); // end

	do {
		printf("\n\n\nSelect option: ");
		scanf_s("%d", &userMenuChoise);
		
		switch (userMenuChoise) {
		case 1:
			addInformationAboutCars(usersCars, numberOfCars);
			break;
		case 2:
			displayInformationAboutCars(usersCars, numberOfCars);
			break;
		case 3:
			sortInformation(usersCars, numberOfCars);
			break;
		case 4:
			searchByCar(usersCars, numberOfCars);
			break;
		case 5:
			editInformationOfCar(usersCars, numberOfCars);
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			printf("Exiting from the program...");
			break;
		default:
			printf("You selected the wrong option!\n");
			printf("Please, try again.\n");
			break;
		}

	} while (userMenuChoise != 16);

}