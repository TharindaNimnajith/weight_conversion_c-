#pragma once

#include "My1DArray.h"
#include "Conversion.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Menu {
	public:
		Menu();
		void displayMainMenu();
		void displayConversionSubMenu();
		void displayMy1DArraySubMenu();
		void clrscr();
		~Menu();
};