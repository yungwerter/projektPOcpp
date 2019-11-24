#pragma once
#include "Weglowa.h"
#include <string>
using namespace std;

class Kamienna : public Weglowa {
	double producedEnergy;
protected:
	double moneyUsed;
public:
	Kamienna() {}
	Kamienna(int numberOfEmployee, int safetyLevel, int age, double balance, double coalLevel, int airPollutionLevel, double producedEnergy, double moneyUsed);
	double getProducedEnergy();
	double getMoneyUsed();
	void setProducedEnergy(double producedEnergy);
	void setMoneyUsed(double moneyUsed);
};