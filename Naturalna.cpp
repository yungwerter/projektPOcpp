#include <iostream>
#include "Naturalna.h"

Naturalna::Naturalna(int numberOfEmployees, int safetyLevel, int age, double balance) :
	Elektrownia(numberOfEmployees, safetyLevel),age(age), balance(balance) {}
int Naturalna::getAge() {
	return age;
}
double Naturalna::getBalance() {
	return balance;
}

void Naturalna::setAge(int age) {
	this->age = age;
}

void Naturalna::setBalance(double balance) {
	this->balance = balance;
}