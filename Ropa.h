#pragma once
#include <iostream>
#include <string>
#include "Naturalna.h"

using namespace std;

class Ropa : public Naturalna {
	double oilLevel;
protected:
	string location;
public:
	Ropa() {}
	Ropa(int numberOfEmployees, int safetyLevel, int age, double balance, double oilLevel, string location);
	double getOilLevel();
	string getLocation();
	void setOilLevel(double oilLevel);
	void setLocation(string location);
};