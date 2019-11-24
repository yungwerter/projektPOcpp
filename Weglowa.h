#pragma once
#include <iostream>
#include "Naturalna.h"

class Weglowa : public Naturalna {
	double coalLevel;
protected:
	int airPollutionLevel;
public:
	Weglowa() {}
	Weglowa(int numberOfEmployee, int safetyLevel, int age, double balance, double coalLevel, int airPollutionLevel);
	double getCoalLevel();
	int getAirPollutionLevel();
	void setCoalLevel(double coalLevel);
	void setAirPollutionLevel(int airPollutionLevel);
};