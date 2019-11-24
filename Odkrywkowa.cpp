#include "Odkrywkowa.h"

Odkrywkowa::Odkrywkowa(
	int numberOfEmployee, 
	int safetyLevel, 
	int age, 
	double balance, 
	double coalLevel, 
	int airPollutionLevel, 
	double burnedCoal, 
	string ctoName, 
	int fatalInjuries, 
	double size) :
	Brunatna(numberOfEmployee, safetyLevel, age, balance, coalLevel, airPollutionLevel, burnedCoal,ctoName),fatalInjuries(fatalInjuries), size(size) {}
int Odkrywkowa::getFatalInjuries() {
	return fatalInjuries;
}
double Odkrywkowa::getSize() {
	return size;
}

void Odkrywkowa::setFatalInjuries(int fatalInjuries)
{
	this->fatalInjuries = fatalInjuries;
}

void Odkrywkowa::setSize(double size)
{
	this->size = size;
}
