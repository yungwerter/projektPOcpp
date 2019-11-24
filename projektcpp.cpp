#include <iostream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <vector>
#include <Windows.h>
#include "elektrownia.h"
#include "Wodna.h"
#include "Jadrowa.h"
#include "Naturalna.h"
#include "Weglowa.h"
#include "Gazowa.h"
#include "Ropa.h"
#include "Brunatna.h"
#include "Kamienna.h"
#include "Odkrywkowa.h"
#include "Glebinowa.h"
#include <iterator>

using namespace std;

list<Wodna> listaWodnych;
list<Jadrowa> listaJadrowych;
list<Odkrywkowa> listaOdkrywkowych;
list<Glebinowa<int>> listaGlebinowych;
list<Gazowa> listaGazowych;
list<Ropa> listaRopnych;

map<string, Wodna> wodnaDict;
map<string, Jadrowa> jadrDict;
map<string, Odkrywkowa> odkrDict;
map<string, Glebinowa<int>> glebDict;
map<string, Gazowa> gazDict;
map<string, Ropa> ropaDict;

string current = "Elektrownia";

void showTree() {
	string tree = "-Elektrownia \n"
		"\t -Wodna\n"
		"\t -Jadrowa \n"
		"\t -Naturalna \n"
		"\t\t -Weglowa\n"
		"\t\t\t -Brunatna\n"
		"\t\t\t\t -Odkrywkowa\n"
		"\t\t\t\t -Glebinowa\n"
		"\t\t\t -Kamienna\n"
		"\t\t\t\t -Odkrywkowa\n"
		"\t\t\t\t -Glebinowa\n"
		"\t\t -Gazowa\n"
		"\t\t -Ropa\n";
	cout << tree << endl;
}

void changeNode(string target) {
	if (target == "Elektrownia" || target == "Wodna" || target == "Jadrowa" || target == "Naturalna"
		|| target == "Weglowa" || target == "Gazowa" || target == "Ropa" || target == "Brunatna"
		|| target == "Kamienna" || target == "Odkrywkowa" || target == "Glebinowa") {
		current = target;
	}
	else {
		cout << "Wybrano nieistniejacy wezel!\n" << endl;
	}
}

void makeObject(string target) {
	if (current == "Wodna") {
		cout << "Podaj odpowiednie parametry przedzielone spacja - liczbe pracownikow, poziom bezpieczenstwa, poziom wody "
			"i pracownika miesiaca (uzyj podlogi miedzy imieniem i nazwiskiem - dziekuje :)\n";
		string anInput;
		getline(cin, anInput);
		istringstream iss(anInput);
		vector<string> inputParsed(istream_iterator<string>{iss}, istream_iterator<string>());
		int numberOfEmployees = stoi(inputParsed[0]);
		int safetyLevel = stoi(inputParsed[1]);
		double waterLevel = stod(inputParsed[2]);
		string employeeOfTheMonth = inputParsed[3];
		Wodna object(numberOfEmployees, safetyLevel, waterLevel, employeeOfTheMonth);
		listaWodnych.push_back(object);
		wodnaDict[target] = object;

	}
	else if(current == "Jadrowa"){
		cout << "Podaj odpowiednie parametry przedzielone spacja - liczbe pracownikow, poziom bezpieczenstwa, poziom uranu i nazwisko prezesa\n";
		string anInput;
		getline(cin, anInput);
		istringstream iss(anInput);
		vector<string> inputParsed(istream_iterator<string>{iss}, istream_iterator<string>());
		int numberOfEmployees = stoi(inputParsed[0]);
		int safetyLevel = stoi(inputParsed[1]);
		double uranLevel = stod(inputParsed[2]);
		string ceoName = inputParsed[3];
		Jadrowa object(numberOfEmployees, safetyLevel, uranLevel, ceoName);
		listaJadrowych.push_back(object);
		jadrDict[target] = object;
	}
	else if (current == "Gazowa") {
		cout << "Podaj odpowiednie parametry przedzielone spacja - liczbe pracownikow, poziom bezpieczenstwa, wiek, saldo, poziom gazu i poziom ochrony \n";
		string anInput;
		getline(cin, anInput);
		istringstream iss(anInput);
		vector<string> inputParsed(istream_iterator<string>{iss}, istream_iterator<string>());
		int numberOfEmployees = stoi(inputParsed[0]);
		int safetyLevel = stoi(inputParsed[1]);
		int age = stoi(inputParsed[2]);
		double balance = stod(inputParsed[3]);
		double gasLevel = stod(inputParsed[4]);
		int securityLevel = stoi(inputParsed[5]);
		Gazowa object(numberOfEmployees, safetyLevel, age, balance, gasLevel, securityLevel);
		listaGazowych.push_back(object);
		gazDict[target] = object;
	}
	else if (current == "Ropa") {
		cout << "Podaj odpowiednie parametry przedzielone spacja - liczbe pracownikow, poziom bezpieczenstwa, wiek, saldo, poziom ropy i lokację \n";
		string anInput;
		getline(cin, anInput);
		istringstream iss(anInput);
		vector<string> inputParsed(istream_iterator<string>{iss}, istream_iterator<string>());
		int numberOfEmployees = stoi(inputParsed[0]);
		int safetyLevel = stoi(inputParsed[1]);
		int age = stoi(inputParsed[2]);
		double balance = stod(inputParsed[3]);
		double oilLevel = stod(inputParsed[4]);
		string location = inputParsed[5];
		Ropa object(numberOfEmployees, safetyLevel, age, balance, oilLevel, location);
		listaRopnych.push_back(object);
		ropaDict[target] = object;
	} 
	else if(current == "Odkrywkowa"){
		cout << "Podaj odpowiednie parametry przedzielone spacja - liczbe pracownikow, poziom bezpieczenstwa, wiek, saldo, poziom wegla, "
			"poziom zanieczyszczenia powietrza, spalony wegiel, nazwisko dyrektora technicznego, ilosc smiertelnych wypadkow, wielkosc\n";
		string anInput;
		getline(cin, anInput);
		istringstream iss(anInput);
		vector<string> inputParsed(istream_iterator<string>{iss}, istream_iterator<string>());
		int numberOfEmployees = stoi(inputParsed[0]);
		int safetyLevel = stoi(inputParsed[1]);
		int age = stoi(inputParsed[2]);
		double balance = stod(inputParsed[3]);
		double coalLevel = stod(inputParsed[4]);
		int airPollutionLevel = stoi(inputParsed[5]);
		double burnedCoal = stod(inputParsed[6]);
		string ctoName = inputParsed[7];
		int fatalInjuries = stoi(inputParsed[8]);
		int size = stoi(inputParsed[9]);
		Odkrywkowa object(numberOfEmployees, safetyLevel, age, balance, coalLevel, airPollutionLevel, burnedCoal, ctoName, fatalInjuries, size);
		listaOdkrywkowych.push_back(object);
		odkrDict[target] = object;
	}
	else if (current == "Glebinowa") {
		cout << "Podaj odpowiednie parametry przedzielone spacja - liczbe pracownikow, poziom bezpieczenstwa, wiek, saldo, poziom wegla, "
			"poziom zanieczyszczenia powietrza, spalony wegiel, nazwisko dyrektora technicznego, "
			"wyprodukowana energie, zuzyte pieniadze, wydatki, glebokosc \n";
		string anInput;
		getline(cin, anInput);
		istringstream iss(anInput);
		vector<string> inputParsed(istream_iterator<string>{iss}, istream_iterator<string>());
		int numberOfEmployees = stoi(inputParsed[0]);
		int safetyLevel = stoi(inputParsed[1]);
		int age = stoi(inputParsed[2]);
		double balance = stod(inputParsed[3]);
		double coalLevel = stod(inputParsed[4]);
		int airPollutionLevel = stoi(inputParsed[5]);
		double burnedCoal = stod(inputParsed[6]);
		string ctoName = inputParsed[7];
		double producedEnergy = stod(inputParsed[8]);
		double moneyUsed = stod(inputParsed[9]);
		double expenses = stoi(inputParsed[10]);
		double depth = stoi(inputParsed[11]);
		Glebinowa<int> object(numberOfEmployees, safetyLevel, age, balance, coalLevel, airPollutionLevel, burnedCoal, ctoName, producedEnergy, moneyUsed, expenses, depth);
		listaGlebinowych.push_back(object);
		glebDict[target] = object;
	}
	else {
	cout << "Obecny wezel nie jest lisciem! Obiekty mozna dodawac tylko do lisci. " << endl;
	}

}

void deleteObject(string target) {
	if (current == "Wodna") {
		
		wodnaDict.erase(target);
	}
	else if (current == "Jadrowa") {
		jadrDict.erase(target);
	}
	else if (current == "Gazowa") {
		gazDict.erase(target);
	}
	else if (current == "Ropa") {
		ropaDict.erase(target);
	}
	else if (current == "Odkrywkowa") {
		odkrDict.erase(target);
	}
	else if (current == "Glebinowa") {
		glebDict.erase(target);
	}
	else {
		cout << "Ojej, obecny wezel nie jest lisciem! Nie mozna z niego usuwac, bo nie ma zadnych obiektow. :)" << endl;
	}
}
void modifyObject(string target) {
	deleteObject(target);
	makeObject(target);
}
void showDir() {
	if (current == "Elektrownia") {
		for (auto element : wodnaDict) {
			cout << element.first << endl;
		}
		for (auto element : jadrDict) {
			cout << element.first << endl;
		}
		for (auto element : gazDict) {
			cout << element.first << endl;
		}
		for (auto element : ropaDict) {
			cout << element.first << endl;
		}
		for (auto element : odkrDict) {
			cout << element.first << endl;
		}
		for (auto element : glebDict) {
			cout << element.first << endl;
		}

	}
	else if (current == "Wodna") {
		for (auto element : wodnaDict) {
			cout << element.first << endl;
		}
	}
	else if (current == "Jadrowa") {
		for (auto element : jadrDict) {
			cout << element.first << endl;
		}
	}
	else if (current == "Naturalna") {
		for (auto element : gazDict) {
			cout << element.first << endl;
		}
		for (auto element : ropaDict) {
			cout << element.first << endl;
		}
		for (auto element : odkrDict) {
			cout << element.first << endl;
		}
		for (auto element : glebDict) {
			cout << element.first << endl;
		}
	}
	else if (current == "Weglowa") {
		for (auto element : odkrDict) {
			cout << element.first << endl;
		}
		for (auto element : glebDict) {
			cout << element.first << endl;
		}

	}
	else if (current == "Brunatna") {
		for (auto element : odkrDict) {
			cout << element.first << endl;
		}
		for (auto element : glebDict) {
			cout << element.first << endl;
		}

	}
	else if (current == "Kamienna") {
		for (auto element : glebDict) {
			cout << element.first << endl;
		}

	}
	else if (current == "Odkrywkowa") {
		for (auto element : odkrDict) {
			cout << element.first << endl;
		}
	}
	else if (current == "Glebinowa") {
		for (auto element : glebDict) {
			cout << element.first << endl;
		}
	}
	else if (current == "Gazowa") {
		for (auto element : gazDict) {
			cout << element.first << endl;
		}
	}
	else if (current == "Ropa") {
		for (auto element : ropaDict) {
			cout << element.first << endl;
		}
	}
}

void showObject(string object) {
	if (wodnaDict.find(object) != wodnaDict.end()) {
		cout << "Obiekt typu Wodna, nazwa obiektu - " << object << endl;
		cout << "Liczba pracownikow - " <<  wodnaDict[object].getNumberOfEmployees() << endl;
		cout << "Poziom bezpieczenstwa - " << wodnaDict[object].getLevel() << endl;
		cout << "Poziom wody - " << wodnaDict[object].getWaterLevel() << endl;
		cout << "Pracownik miesiaca - " << wodnaDict[object].getEmployeeOfTheMonth() << endl;
	}
	else if (jadrDict.find(object) != jadrDict.end()) {
		cout << "Obiekt typu Jadrowa, nazwa obiektu - " << object << endl;
		cout << "Liczba pracownikow - " << jadrDict[object].getNumberOfEmployees() << endl;
		cout << "Poziom bezpieczenstwa - " << jadrDict[object].getLevel() << endl;
		cout << "Poziom uranu - " << jadrDict[object].getUranLevel() << endl;
		cout << "Nazwisko prezesa - " << jadrDict[object].getCeoName() << endl;
	}
	else if (gazDict.find(object) != gazDict.end()) {
		cout << "Obiekt typu Gazowa, nazwa obiektu - " << object << endl;
		cout << "Liczba pracownikow - " << gazDict[object].getNumberOfEmployees() << endl;
		cout << "Poziom bezpieczenstwa - " << gazDict[object].getLevel() << endl;
		cout << "Wiek - " << gazDict[object].getAge() << endl;
		cout << "Saldo - " << gazDict[object].getBalance() << endl;
		cout << "Poziom gazu - " << gazDict[object].getGasLevel() << endl;
		cout << "Poziom ochrony - " << gazDict[object].getSecurityLevel() << endl;
	}
	else if (ropaDict.find(object) != ropaDict.end()) {
		cout << "Obiekt typu Ropa, nazwa obiektu - " << object << endl;
		cout << "Liczba pracownikow - " << ropaDict[object].getNumberOfEmployees() << endl;
		cout << "Poziom bezpieczenstwa - " << ropaDict[object].getLevel() << endl;
		cout << "Wiek - " << ropaDict[object].getAge() << endl;
		cout << "Saldo - " << ropaDict[object].getBalance() << endl;
		cout << "Poziom ropy - " << ropaDict[object].getOilLevel() << endl;
		cout << "Lokacja - " << ropaDict[object].getLocation() << endl;
	}
	else if (odkrDict.find(object) != odkrDict.end()) {
		cout << "Obiekt typu Odkrywkowa, nazwa obiektu - " << object << endl;
		cout << "Liczba pracownikow - " << odkrDict[object].getNumberOfEmployees() << endl;
		cout << "Poziom bezpieczenstwa - " << odkrDict[object].getLevel() << endl;
		cout << "Wiek - " << odkrDict[object].getAge() << endl;
		cout << "Saldo - " << odkrDict[object].getBalance() << endl;
		cout << "Poziom wegla - " << odkrDict[object].getCoalLevel() << endl;
		cout << "Poziom zanieczyszczenia powietrza - " << odkrDict[object].getAirPollutionLevel() << endl;
		cout << "Ilosc spalonego wegla - " << odkrDict[object].getBurnedCoal() << endl;
		cout << "Nazwisko dyrektora technicznego - " << odkrDict[object].getCtoName() << endl;
		cout << "Ilosc wypadkow smiertelnych - " << odkrDict[object].getFatalInjuries() << endl;
		cout << "Rozmiar - " << odkrDict[object].getSize() << endl;
	}
	else if (glebDict.find(object) != glebDict.end()) {
		cout << "Obiekt typu Glebinowa, nazwa obiektu - " << object << endl;
		cout << "Liczba pracownikow - " << glebDict[object].getNumberOfEmployees() << endl;
		cout << "Poziom bezpieczenstwa - " << glebDict[object].getLevel() << endl;
		cout << "Wiek - " << glebDict[object].getAge() << endl;
		cout << "Saldo - " << glebDict[object].getBalance() << endl;
		cout << "Poziom wegla - " << glebDict[object].getCoalLevel() << endl;
		cout << "Poziom zanieczyszczenia powietrza - " << glebDict[object].getAirPollutionLevel() << endl;
		cout << "Ilosc spalonego wegla - " << glebDict[object].getBurnedCoal() << endl;
		cout << "Nazwisko dyrektora technicznego - " << glebDict[object].getCtoName() << endl;
		cout << "Ilosc wyprodukowanej energii - " << glebDict[object].getProducedEnergy() << endl;
		cout << "Zuzyte pieniadze - " << glebDict[object].getMoneyUsed() << endl;
		cout << "Wydatki - " << glebDict[object].getExpenses() << endl;
		cout << "Glebokosc - " << glebDict[object].getDepth() << endl;
	}
	else {
		cout << "Ojej, nie ma takiego obiektu w mojej strukturze! UwU" << endl;
	}

	
}


int main() {

	cout << "Witaj w moim programie!" << endl;
	cout << endl;
	string help = "Dostepne komendy: \n CD [nazwa wezla] - zmiana wezla w strukturze\n"
		"MO [obiekt] - tworzy obiekt podany jako parametr dla biezacego liscia (potrzebne argumenty)\n"
		"DO [obiekt] - usuwa obiekt podany jako parametr dla biezacego liscia\n"
		"MDO [obiekt] - modyfikacja obiektu podanego jako parametr dla biezacego liscia\n"
		"DIR - wyswietla informacje o obiektach widocznych z danego poziomu\n"
		"SHOW [obiekt] - wyswietla szczegolowe informacje o obiekcie\n"
		"SAVE - zapis zbioru do pliku\n"
		"READ - odczyt zbioru do pliku\n"
		"TREE - wyswietla cala strukture\n"
		"EXIT - wyjscie z programu\n";
		bool running = true;
		while (running) {
			cout << endl;
			cout << "Biezacy wezel - " << current << endl;
			cout << endl;
			string input;
			cout << help << endl;
			cout << endl;
			getline(cin, input);
			istringstream iss(input);
			vector<string> parsedInput(istream_iterator<string>{iss}, istream_iterator<string>());
			string command = parsedInput[0];
			if (command == "CD") {
				string target = parsedInput[1];
				changeNode(target);
				continue;
			}
			if (command == "MO") {
				string target = parsedInput[1];
				makeObject(target);
			}
			else if(command == "DO") {
				string target = parsedInput[1];
				deleteObject(target);
			}
			else if (command == "MDO") {
				string target = parsedInput[1];
				modifyObject(target);
			}
			else if (command == "DIR") {
				showDir();
			}
			else if (command == "SHOW") {
				string target = parsedInput[1];
				showObject(target);
			}
			else if (command == "SAVE") {
				return 0;
			}
			else if (command == "READ") {
				return 0;
			}
			else if (command == "TREE") {
				showTree();
			}
			else if (command == "EXIT") {
				cout << "Zegnam :(\n" << endl;
				Sleep(1500);
				running = false;
			}
			else {
				cout << "Nie rozumiem komendy." << endl;
			}
		}

	return 0;
}