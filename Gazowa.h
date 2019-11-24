#pragma once
#include "Naturalna.h"

class Gazowa : public Naturalna {
	double gasLevel;
protected:
	int securityLevel;
public:
	Gazowa() {}
	Gazowa(int numberOfEmployees, int safetyLevel, int age, double balance,double gasLevel, int securityLevel);
	double getGasLevel();
	int getSecurityLevel();
	void setGasLevel(double gasLevel);
	void setSecurityLevel(int securityLevel);
};