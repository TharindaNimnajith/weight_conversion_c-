#include "stdafx.h"
#include "Menu.h"

#define SIZE 5

int option;

Menu::Menu() {
	displayMainMenu();
}

void Menu::clrscr() {
	system("@cls||clear");
}

void Menu::displayMainMenu() {
	cout << "--- MAIN MENU ---" << endl << endl;
	cout << "1. Display Weight Conversion Sub Menu" << endl;
	cout << "2. Display Number Array Calculation Sub Menu" << endl;
	cout << "0. Exit" << endl << endl;

	cout << "Select an Option: ";
	cin >> option;
	clrscr();

	switch (option) {
		case 1 : displayConversionSubMenu(); break;				 			
		case 2 : displayMy1DArraySubMenu(); break;				 				
		case 0 : exit(0); break;		 
		default: cout << "Invalid Input! Please Try Again..." << endl << endl << endl;
				 displayMainMenu();
	}
}

void Menu::displayConversionSubMenu() {
	cout << "--- CONVERSION SUB MENU ---" << endl << endl;
	cout << "1. Grams To Ounces" << endl;
	cout << "2. Ounces To Grams" << endl;
	cout << "3. Kilograms To Stones" << endl;
	cout << "4. Stones To Kilograms" << endl;
	cout << "5. Pounds To Grams" << endl;
	cout << "6. Grams To Pounds" << endl;
	cout << "7. Back" << endl;
	cout << "0. Exit" << endl << endl;

	cout << "Select an Option: ";
	cin >> option;
	clrscr();

	Conversion *conversion1 = new Conversion();
	double weight;

	switch (option) {
		case 1 : cout << "Enter the Weight in Grams: ";
				 cin >> weight;
				 cout << endl << weight << " Grams = " << conversion1->GramsToOunces(weight) << " Ounces" << endl << endl << endl;
				 break;
		case 2 : cout << "Enter the Weight in Ounces: ";
				 cin >> weight;
				 cout << endl << weight << " Ounces = " << conversion1->OunToGrams(weight) << " Grams" << endl << endl << endl;
				 break;
		case 3 : cout << "Enter the Weight in Kilograms: ";
				 cin >> weight;
				 cout << endl << weight << " Kilograms = " << conversion1->KgToStone(weight) << " Stones" << endl << endl << endl;
				 break;
		case 4 : cout << "Enter the Weight in Stones: ";
				 cin >> weight;
				 cout << endl << weight << " Stones = " << conversion1->StoneToKg(weight) << " Kilograms" << endl << endl << endl;
				 break;
		case 5 : cout << "Enter the Weight in Pounds: ";
				 cin >> weight;
				 cout << endl << weight << " Pounds = " << conversion1->PoundsToGram(weight) << " Grams" << endl << endl << endl;
				 break;
		case 6 : cout << "Enter the Weight in Grams: ";
				 cin >> weight;
				 cout << endl << weight << " Grams = " << conversion1->GramToPound(weight) << " Pounds" << endl << endl << endl;
				 break;
		case 7 : clrscr();
				 displayMainMenu();
				 break;
		case 0 : exit(0);
				 break;
		default: cout << "Invalid Input! Please Try Again..." << endl << endl << endl;
				 displayConversionSubMenu();
	}

	delete conversion1;
	displayConversionSubMenu();
}

void Menu::displayMy1DArraySubMenu() {
	cout << "--- CALCULATION SUB MENU ---" << endl << endl;
	cout << "1. Get Total of a Number Array" << endl;
	cout << "2. Get Average of a Number Array" << endl;
	cout << "3. Get Highest Number of a Number Array" << endl;
	cout << "4. Back" << endl;
	cout << "0. Exit" << endl << endl;

	cout << "Select an Option: ";
	cin >> option;
	clrscr();

	My1DArray *array1 = new My1DArray();
	double array[SIZE];
	int rowNo = 1, i;

	switch (option) {
		case 1 : cout << "Enter the Number Array: " << endl;
				 for (i = 0; i < SIZE; i++)
					cin >> array[i];
				 cout << endl << "Total = " << array1->getTotal(array) << endl << endl << endl;
				 break;
		case 2 : cout << "Enter the Number Array: " << endl;
				 for (i = 0; i < SIZE; i++)
					cin >> array[i];
				 cout << endl << "Average = " << setiosflags(ios::fixed) << setprecision(3) << array1->getAverage(array) << endl << endl << endl;
				 break;
		case 3 : cout << "Enter the Number Array: " << endl;
				 for (i = 0; i < SIZE; i++)
					cin >> array[i];
				 cout << endl << "Highest = " << array1->getHighestInRow(array, rowNo) << endl << endl << endl;
				 break;
		case 4 : clrscr();
				 displayMainMenu();
				 break;
		case 0 : exit(0);
				 break;
		default: cout << "Invalid Input! Please Try Again..." << endl << endl << endl;
				 displayMy1DArraySubMenu();
	}

	delete array1;
	displayMy1DArraySubMenu();
}

Menu::~Menu() {
	//Destructor runs
}