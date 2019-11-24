#include <iostream>
#include "Wodna.h"

using namespace std;

Wodna::Wodna(int numberOfEmployees, int safetyLevel, double waterLevel, string employeeOfTheMonth)
	: Elektrownia(numberOfEmployees, safetyLevel), waterLevel(waterLevel), employeeOfTheMonth(employeeOfTheMonth) {}

double Wodna::getWaterLevel() {
	return waterLevel;
}
string Wodna::getEmployeeOfTheMonth(){
	return employeeOfTheMonth;
}

void Wodna::setWaterLevel(double waterLevel) {
	this->waterLevel = waterLevel;
}
void Wodna::setEmployeeOfTheMonth(string employeeOfTheMonth) {
	this->employeeOfTheMonth = employeeOfTheMonth;
}