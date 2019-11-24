#include "Jadrowa.h"
#include <iostream>

Jadrowa::Jadrowa(int numberOfEmployees, int safetyLevel, double uranLevel, string ceoName) :
	Elektrownia(numberOfEmployees, safetyLevel), uranLevel(uranLevel), ceoName(ceoName) {}

double Jadrowa::getUranLevel() {
	return uranLevel;

}
string Jadrowa::getCeoName() {
	return ceoName;
}

void Jadrowa::setUranLevel(double uranLevel) {
	this->uranLevel = uranLevel;
}

void Jadrowa::setCeoName(string ceoName) {
	this->ceoName = ceoName;
}