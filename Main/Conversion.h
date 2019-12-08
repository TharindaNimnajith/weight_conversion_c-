#pragma once

class Conversion {
	public:
		Conversion();
		double GramsToOunces(double weight);
		double OunToGrams(double weight);
		double KgToStone(double weight);
		double StoneToKg(double weight);
		double PoundsToGram(double weight);
		double GramToPound(double weight);
		~Conversion();
};