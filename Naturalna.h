#pragma once
#include <iostream>
#include "elektrownia.h"

class Naturalna : public Elektrownia {
	int age;
protected:
	double balance;
public:
	Naturalna() {}
	Naturalna(int numberOfEmployees, int safetyLevel, int age, double balance);
	int getAge();
	double getBalance();
	void setAge(int age);
	void setBalance(double balance);
};