#include <iostream>
#include "Elektrownia.h"

using namespace std;

Elektrownia :: Elektrownia(int numberOfEmployees, int safetyLevel)
	: numberOfEmployees(numberOfEmployees), safetyLevel(safetyLevel)
		{}
int Elektrownia :: getNumberOfEmployees() {
	return numberOfEmployees;
}

int Elektrownia::getLevel() {
	return safetyLevel;
}

void Elektrownia::setNumberOfEmployees(int numberOfEmployees) {
	this->numberOfEmployees = numberOfEmployees;
}
void Elektrownia::setLevel(int safetyLevel) {
	this->safetyLevel = safetyLevel;
}