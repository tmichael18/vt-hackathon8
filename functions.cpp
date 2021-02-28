#include "functions.hpp"

#include <istream>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <random>

double getDecimal() {

	float temp = (float)rand() / RAND_MAX; //get double between 0-1, 0.76543

	std::string num = std::to_string(temp); //create string

	num.erase(4); //cut string, 0.76

	double returndouble = stod(num); //turn it back into double

	return returndouble; //return double
}

double getRandomPercentage() {
	//returns a random percent of the form xx.xx

	int percent1 = rand() % 100; //returns between 0 - 99
	//double percent2 = rand(); //returns between 0 - 1
	double weight = (double)percent1 + getDecimal();
	return weight;
}


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

	std::size_t lineno = 1;
	int linetarget = (rand() % 100) + 1;
	std::ifstream myfile;
	std::string linestr;

	myfile.open("StreetNames.txt");

	while (lineno < linetarget) {

		std::getline(myfile, linestr);
		lineno++;
	}

	myfile.close();
	return linestr;
}

std::string getCity() {

	std::size_t lineno = 1;
	int linetarget = (rand() % 100) + 1;
	std::ifstream myfile;
	std::string linestr;

	myfile.open("CityNames.txt");

	while (lineno < linetarget) {

		std::getline(myfile, linestr);
		lineno++;
	}

	myfile.close();
	return linestr;
}

std::string getState() {

	std::size_t lineno = 1;
	int linetarget = (rand() % 50) + 1;
	std::ifstream myfile;
	std::string linestr;

	myfile.open("StateNames.txt");

	while (lineno < linetarget) {

		std::getline(myfile, linestr);
		lineno++;
	}

	myfile.close();
	return linestr;
}

std::string getZipCode() {

	int zipcode = (rand() % 30000 + 10000);
	std::string zipcodestring = std::to_string(zipcode);

	return zipcodestring;
}

int getInitialBalance() { //this is weight based

	return 0;
}

std::string getDeposit() { //need 12 of each of these
	//data for this method is in the server, using weighted distrubtion, pinned

	double weight = getRandomPercentage();
	int deposit = 0;
	double t_deposit;

	//using if else sytax
	if (weight < 11.3) {

		//gets random number between 0 and 10000
		deposit = rand() % 10001; 
		deposit /= 12;
		//return deposit;
	}
	else if (weight < 19.3) {

		//gets random number between 10000 and 14999
		deposit = rand() % 5000 + 10000;
		deposit /= 12;
		//return deposit;
	}
	else if (weight < 33.2) {

		//gets random number between 15000 and 24999
		deposit = rand() % 10000 + 15000;
		deposit /= 12;
		//return deposit;
	}
	else if (weight < 45.0) {

		//gets random number between 25000 and 34999
		deposit = rand() % 10000 + 25000;
		deposit /= 12;
		//return deposit;
	}
	else if (weight < 59.5) {

		//gets random number between 35000 and 49999
		deposit = rand() % 15000 + 35000;
		deposit /= 12;
		//return deposit;
	}
	else if (weight < 76.4) {

		//gets random number between 50000 and 74999
		deposit = rand() % 25000 + 50000;
		deposit /= 12;
		//return deposit;
	}
	else if (weight < 85.6) {

		//gets random number between 75000 and 99999
		deposit = rand() % 25000 + 75000;
		deposit /= 12;
		//return deposit;
	}
	else if (weight < 94) {

		//gets random number between 100000 and 149999
		deposit = rand() % 50000 + 100000;
		deposit /= 12;
		//return deposit;
	}
	else if (weight < 96.9) {

		//gets random number between 150000 and 199999
		deposit = rand() % 50000 + 150000;
		deposit /= 12;
		//return deposit;
	}
	else if (weight < 99.7) {

		//gets random number between 200000 and 500000
		deposit = rand() % 300000 + 200000;
		deposit /= 12;
		//return deposit;
	}
	else if (weight < 100.0) {

		//gets random number between 500000 and 1000000
		deposit = rand() % 500000 + 500000;
		deposit /= 12;
		//return deposit;
	}

	t_deposit = (double)deposit + getDecimal();
	std::string s_deposit = std::to_string(t_deposit);
	//need to get rid of tailing 0's
	//TODO
	s_deposit.erase(s_deposit.end() );

	std::string r_deposit = s_deposit + ',' + s_deposit + ',' + s_deposit + ',' + s_deposit + ','
						  + s_deposit + ',' + s_deposit + ',' + s_deposit + ',' + s_deposit + ','
						  + s_deposit + ',' + s_deposit + ',' + s_deposit + ',' + s_deposit + ','
						  + s_deposit + ',' + s_deposit + ',' + s_deposit + ',' + s_deposit;
	return r_deposit;
	//return r_deposit;
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

