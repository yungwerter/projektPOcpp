#pragma once
#include "Brunatna.h"
#include "Kamienna.h"
using namespace std;

template <typename T>

class Glebinowa : public Brunatna, public Kamienna {

	T expenses;
protected:
	T depth;
public:
	Glebinowa() {}
	Glebinowa(int numberOfEmployees, int safetyLevel, int age, double balance,
		double coalLevel, int airPollutionLevel, double burnedCoal, string ctoName, 
		double producedEnergy, double moneyUsed, T expenses, T depth) : Brunatna(numberOfEmployees, safetyLevel, age, 
			balance, coalLevel, airPollutionLevel, burnedCoal, ctoName),
		Kamienna(numberOfEmployees, safetyLevel, age, 
				balance, coalLevel,airPollutionLevel, producedEnergy, moneyUsed), expenses(expenses),depth(depth) {}
	T getExpenses() {
		return expenses;
	}
	T getDepth() {
		return depth;
	}
	void setExpenses(T expenses) {
		this->expenses = expenses;
	}
	void setDepth(T depth) {
		this->depth = depth;
	}
	double getBurnedCoal() {
		return Brunatna::getBurnedCoal();
	}
	string getCtoName() {
		return Brunatna::getCtoName();
	}
	double getProducedEnergy() {
		return Kamienna::getProducedEnergy();
	}
	double getMoneyUsed() {
		return Kamienna::getMoneyUsed();
	}
	int getNumberOfEmployees()
	{
		return Elektrownia::getNumberOfEmployees();
	}
	int getLevel()
	{
		return Elektrownia::getLevel();
	}
	int getAge()
	{
		return Naturalna::getAge();
	}

	double getBalance()
	{
		return Naturalna::getBalance();
	}

	double getCoalLevel()
	{
		return Weglowa::getCoalLevel();
	}

	int getAirPollutionLevel()
	{
		return Weglowa::getAirPollutionLevel();
	}
};