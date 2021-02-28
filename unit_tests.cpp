#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions.hpp"
#include <iostream>
#include <fstream>
#include <random>
#include <string>


TEST_CASE("Creating .csv file", "[functions]"){
	std::ofstream myfile;
	myfile.open("data.csv");
	myfile << "This is the first cell in the first column.\n";
	for (int i = 1; i < 10; i++) {

		std::string deposits = getDeposit();
		double income = getIncomeBasedOnDeposit(deposits);

		myfile << i << "," << getFirstName() << "," << getLastName() << "," << getStreetNum()
			<< "," << getStreetAddress() << "," << getCity() << "," << getState()
			<< "," << getZipCode() << "," << getInitialBalance(deposits) << "," << deposits
			//<< "," << getDeposit() << "," << getDeposit() << "," << getDeposit()
			//<< "," << getDeposit() << "," << getDeposit() << "," << getDeposit()
			//<< "," << getDeposit() << "," << getDeposit() << "," << getDeposit()
			//<< "," << getDeposit() << "," << getDeposit() 
			<< "," << getWithdrawal(income)
			<< "," << getWithdrawal(income) << "," << getWithdrawal(income) << "," << getWithdrawal(income)
			<< "," << getWithdrawal(income) << "," << getWithdrawal(income) << "," << getWithdrawal(income)
			<< "," << getWithdrawal(income) << "," << getWithdrawal(income) << "," << getWithdrawal(income)
			<< "," << getWithdrawal(income) << "," << getWithdrawal(income) << "," << getLoans(income)
			<< "," << getLoans(income) << "," << getLoans(income) << "," << getLoans(income)
			<< "," << getLoans(income) << "," << getLoans(income) << "," << getLoans(income)
			<< "," << getLoans(income) << "," << getLoans(income) << "," << getLoans(income)
			<< "," << getLoans(income) << "," << getLoans(income) << "," << getPurchases(income)
			<< "," << getPurchases(income) << "," << getPurchases(income) << "," << getPurchases(income)
			<< "," << getPurchases(income) << "," << getPurchases(income) << "," << getPurchases(income)
			<< "," << getPurchases(income) << "," << getPurchases(income) << "," << getPurchases(income)
			<< "," << getPurchases(income) << "," << getPurchases(income) << "," << getBalance()
			<< "," << getBalance() << "," << getBalance() << "," << getBalance()
			<< "," << getBalance() << "," << getBalance() << "," << getBalance()
			<< "," << getBalance() << "," << getBalance() << "," << getBalance()
			<< "," << getBalance() << "," << getBalance() << "\n";
	}

	myfile.close();
}

TEST_CASE("creating Michael's test.csv file", "[functions]") {

	std::ofstream myfile;
	myfile.open("test.csv");
	myfile << "This is the first cell in the first column.\n";

	float temp = (float)rand() / RAND_MAX;

	std::string num = std::to_string(temp);
	
	num.erase(4);

	double returndouble = stod(num);

	std::string deposits = getDeposit();
	
	//file for testing
	myfile << "This is the random percentage1: " << getRandomPercentage() << "\n";
	myfile << "This is the random percentage2: " << getRandomPercentage() << "\n";
	myfile << "This is the random percentage3: " << getRandomPercentage() << "\n";
	myfile << "This is the random percentage4: " << getRandomPercentage() << "\n";
	myfile << "This is the random percentage5: " << getRandomPercentage() << "\n\n";
	myfile << "This is the get income tester deposit: " << deposits << "\n";
	myfile << "This is the get income tester income: " << getIncomeBasedOnDeposit(deposits) << "\n";

	myfile.close();
}

TEST_CASE("creating Antonio's test2.csv file", "[functions]") {

	//std::ofstream myfile;
	//myfile.open("test2.csv");
	//myfile << "This is the first cell in the first column.\n";

	//Input any testing you need done here, avoid changing anything else, feel free to add whatever you need
	//when you are done we can either have you attempt to push or you can send your changes to me
}
