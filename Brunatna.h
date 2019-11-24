#pragma once
#include "Weglowa.h"
#include <string>
using namespace std;

class Brunatna : public  Weglowa {
	double burnedCoal;
protected:
	string ctoName;
public:
	Brunatna() {}
	Brunatna(int numberOfEmployees, int safetyLevel, int age, double balance, double coalLevel, int airPollutionLevel, double burnedCoal, string ctoName);
	double getBurnedCoal();
	string getCtoName();
	void setBurnedLocal(double burnedCoal);
	void setCtoName(string ctoName);
};