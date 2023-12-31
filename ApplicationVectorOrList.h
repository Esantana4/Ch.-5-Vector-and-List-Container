#pragma once
#include<iostream>
#include<list>
#include<string>
#include<fstream>
#include<algorithm>
#include<map>
using namespace std;

// Credit: Otoniel Torres Bernal & Joe Bryant & Erik Santana

//input (1) header files inputs validation
char inputChar(string prompt, string lookup);
int inputInteger(string prompt);
int inputInteger(string prompt, int startRange, int endRange);
double inputDouble(string prompt, double startRange, double endRange);

class ApplicationVectorOrList {
private:
	list<int> data;
public:
	//defualt constructor
	ApplicationVectorOrList();

	//member function to add an integer
	void addIntegerContainer(int value);
	//member function to delete an integer
	void deleteIntegerContainer(int value);
	//member function to display input integers
	void displayIntegersContainer();
	//using map to keep track of the frequency
	map<int, int> repeatedFreq() const;
	//display the frequencies
	void displayFreq();

	//member function for main menu
	void mainMenu();

};
