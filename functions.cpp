#include "functions.hpp"

#include <istream>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <random>


std::string getFirstName() {
	
	std::size_t lineno = 1;
	int linetarget = (rand() % 146) + 1;
	std::ifstream myfile;
	std::string linestr;

	myfile.open("FirstNames.txt");

	while (lineno < linetarget) {

		std::getline(myfile, linestr);
		lineno++;
	}

	myfile.close();
	return linestr;
}

std::string getLastName(){

	std::size_t lineno = 1;
	int linetarget = (rand() % 146) + 1;
	std::ifstream myfile;
	std::string linestr;

	myfile.open("LastNames.txt");

	while (lineno < linetarget) {

		std::getline(myfile, linestr);
		lineno++;
	}

	myfile.close();
	return linestr;
}

std::string getStreetNum() {

	int streetnumber = (rand() % 30000 + 200);
	std::string streetstring = std::to_string(streetnumber);
	
	return streetstring;
}

std::string getStreetAddress() {

	return "temp";
}

std::string getCity() {

	return "temp";
}

std::string getState() {

	return "temp";
}

std::string getZipCode() {

	return "temp";
}

int getInitialBalance() {

	return 0;
}

double getDeposit() { //need 12

	return 0;
}

int getWithdrawal() {

	return 0;
}

double getLoans() {

	return 0;
}

double getPurchases() {

	return 0;
}

double getBalance() {

	return 0;
}