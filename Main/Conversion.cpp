#include "stdafx.h"
#include "Conversion.h"

Conversion::Conversion() {
	//Constructor
}

double Conversion::GramsToOunces(double weight) {
	return weight * 0.0352733686;
}

double Conversion::OunToGrams(double weight) {
	return weight * 28.349523125;
}

double Conversion::KgToStone(double weight) {
	return weight * 0.1574730444;
}

double Conversion::StoneToKg(double weight) {
	return weight * 6.35029318;
}

double Conversion::PoundsToGram(double weight) {
	return weight * 453.59237;
}

double Conversion::GramToPound(double weight) {
	return weight * 0.0022046226;
}

Conversion::~Conversion() {
	//Destuctor runs
}