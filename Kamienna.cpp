#include "Kamienna.h"

Kamienna::Kamienna(int numberOfEmployees, int safetyLevel, int age, double balance, double coalLevel, int airPollutionLevel, double producedEnergy, double moneyUsed) :
	Weglowa(numberOfEmployees, safetyLevel, age, balance, coalLevel, airPollutionLevel), producedEnergy(producedEnergy), moneyUsed(moneyUsed) {}
double Kamienna::getMoneyUsed() {
	return moneyUsed;
}
double Kamienna::getProducedEnergy()
{
	return producedEnergy;
}
void Kamienna::setMoneyUsed(double moneyUsed)
{
	this->moneyUsed = moneyUsed;
}
void Kamienna::setProducedEnergy(double producedEnergy) {
	this->producedEnergy = producedEnergy;
}