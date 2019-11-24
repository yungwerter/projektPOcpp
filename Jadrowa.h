#pragma once
#include "elektrownia.h"
using namespace std;
#include <iostream>

class Jadrowa : public Elektrownia {
	double uranLevel;
protected:
	string ceoName;
public:
	Jadrowa() {}
	Jadrowa(int numberOfEmployees, int safetyLevel, double uranLevel, string ceoName);
	double getUranLevel();
	string getCeoName();
	void setUranLevel(double uranLevel);
	void setCeoName(string ceoName);
};