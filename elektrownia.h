#pragma once


class Elektrownia {
private:
	int numberOfEmployees;
protected:
	int safetyLevel;
public:
	Elektrownia() {}
	Elektrownia(int numberOfEmployees, int safetyLevel);
	int getNumberOfEmployees();
	int getLevel();
	void setNumberOfEmployees(int numberOfEmployees);
	void setLevel(int safetyLevel);
};