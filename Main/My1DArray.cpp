#include "stdafx.h"
#include "My1DArray.h"

My1DArray::My1DArray() {
	//Constructor
}

double My1DArray::getTotal(double arr[]) {
	double total = 0;

	for (int i = 0; i < 5; i++)
		total += arr[i];

	return total;
}

double My1DArray::getAverage(double arr[]) {
	double tot = 0;

	for (int i = 0; i < 5; i++)
		tot += arr[i];

	return tot / 5;
}

double My1DArray::getHighestInRow(double arr[], int rowNumber) {
	double max = arr[0];

	for (int i = 1; i < 5; i++)
		if (max < arr[i])
			max = arr[i];

	return max;
}

My1DArray::~My1DArray() {
	//Destructor runs
}