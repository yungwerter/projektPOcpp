#include "Weglowa.h"

Weglowa::Weglowa(int numberOfEmployees, int safetyLevel, int age, double balance, double coalLevel, int airPollutionLevel) :
	Naturalna(numberOfEmployees, safetyLevel, age, balance), coalLevel(coalLevel), airPollutionLevel(airPollutionLevel) {}
double Weglowa::getCoalLevel() {
	return coalLevel;
}
int Weglowa::getAirPollutionLevel() {
	return airPollutionLevel;
}


void Weglowa::setCoalLevel(double coalLevel) {
	this->coalLevel = coalLevel;
}
void Weglowa::setAirPollutionLevel(int airPollutionLevel) {
	this->airPollutionLevel = airPollutionLevel;
}
