#include "elektrownia.h"
#pragma once

using namespace std;

class Wodna : public Elektrownia
{
	double waterLevel;
protected:
	string employeeOfTheMonth;
public:
	Wodna() {}
	Wodna(int numberOfEmployees, int safetyLevel, double waterLevel, string employeeOfTheMonth);
	double getWaterLevel();
	string getEmployeeOfTheMonth();
	void setWaterLevel(double waterLevel);
	void setEmployeeOfTheMonth(string employeeOfTheMonth);
};