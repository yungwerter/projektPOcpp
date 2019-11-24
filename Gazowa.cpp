#include "Gazowa.h"
#include <iostream>

Gazowa::Gazowa(int numberOfEmployees, int safetyLevel, int age, double balance, double gasLevel, int securityLevel) :
	Naturalna(numberOfEmployees, safetyLevel, age, balance), gasLevel(gasLevel), securityLevel(securityLevel) {}
double Gazowa::getGasLevel() {
	return gasLevel;
}
int Gazowa::getSecurityLevel() {
	return securityLevel;
}

void Gazowa::setGasLevel(double gasLevel)
{
	this->gasLevel = gasLevel;
}

void Gazowa::setSecurityLevel(int securityLevel)
{
	this->securityLevel = securityLevel;
}
