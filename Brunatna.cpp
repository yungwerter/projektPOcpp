#include "Brunatna.h"
Brunatna::Brunatna(int numberOfEmployees, int safetyLevel, int age, double balance, double coalLevel, int airPollutionLevel, double burnedCoal, string ctoName) :
	Weglowa(numberOfEmployees, safetyLevel, age, balance, coalLevel, airPollutionLevel), burnedCoal(burnedCoal), ctoName(ctoName) {}
double Brunatna::getBurnedCoal() {
	return burnedCoal;
}
string Brunatna::getCtoName() {
	return ctoName;
}

void Brunatna::setBurnedLocal(double burnedCoal)
{
	this->burnedCoal = burnedCoal;
}

void Brunatna::setCtoName(string ctoName)
{
	this->ctoName = ctoName;
}
