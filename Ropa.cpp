#include "Ropa.h"

Ropa::Ropa(int numberOfEmployees, int safetyLevel, int age, double balance, double oilLevel, string location) :
	Naturalna(numberOfEmployees, safetyLevel, age, balance), oilLevel(oilLevel), location(location) {}
double Ropa::getOilLevel() {
	return oilLevel;
}
string Ropa::getLocation() {
	return location;
}

void Ropa::setOilLevel(double oilLevel)
{
	this->oilLevel = oilLevel;
}

void Ropa::setLocation(string location)
{
	this->location = location;
}
