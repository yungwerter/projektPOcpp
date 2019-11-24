#pragma once
#include "Brunatna.h"
#include <string>
using namespace std;

class Odkrywkowa : public Brunatna {
	int fatalInjuries;
protected:
	double size;
public:
	Odkrywkowa() {}
	Odkrywkowa(int numberOfEmployee,
		int safetyLevel,
		int age,
		double balance,
		double coalLevel,
		int airPollutionLevel,
		double burnedCoal,
		string ctoName,
		int fatalInjuries,
		double size);
	int getFatalInjuries();
	double getSize();
	void setFatalInjuries(int fatalInjuries);
	void setSize(double size);
};