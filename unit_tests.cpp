#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions.hpp"
#include <iostream>
#include <fstream>


TEST_CASE("Saving .csv file", "[functions]"){
	std::ofstream myfile;
	myfile.open("data.csv");
	myfile << "This is the first cell in the first column.\n";
	for (int i = 1; i < 1001; i++) {

		myfile << i << "," << getFirstName() << "," << getLastName() << "," << getStreetNum()
			<< "," << getStreetAddress() << "," << getCity() << "," << getState()
			<< "," << getZipCode() << "," << getInitialBalance() << "," << getDeposit()
			<< "," << getDeposit() << "," << getDeposit() << "," << getDeposit()
			<< "," << getDeposit() << "," << getDeposit() << "," << getDeposit()
			<< "," << getDeposit() << "," << getDeposit() << "," << getDeposit()
			<< "," << getDeposit() << "," << getDeposit() << "," << getWithdrawal()
			<< "," << getWithdrawal() << "," << getWithdrawal() << "," << getWithdrawal()
			<< "," << getWithdrawal() << "," << getWithdrawal() << "," << getWithdrawal()
			<< "," << getWithdrawal() << "," << getWithdrawal() << "," << getWithdrawal()
			<< "," << getWithdrawal() << "," << getWithdrawal() << "," << getLoans()
			<< "," << getLoans() << "," << getLoans() << "," << getLoans()
			<< "," << getLoans() << "," << getLoans() << "," << getLoans()
			<< "," << getLoans() << "," << getLoans() << "," << getLoans()
			<< "," << getLoans() << "," << getLoans() << "," << getPurchases()
			<< "," << getPurchases() << "," << getPurchases() << "," << getPurchases()
			<< "," << getPurchases() << "," << getPurchases() << "," << getPurchases()
			<< "," << getPurchases() << "," << getPurchases() << "," << getPurchases()
			<< "," << getPurchases() << "," << getPurchases() << "," << getBalance()
			<< "," << getBalance() << "," << getBalance() << "," << getBalance()
			<< "," << getBalance() << "," << getBalance() << "," << getBalance()
			<< "," << getBalance() << "," << getBalance() << "," << getBalance()
			<< "," << getBalance() << "," << getBalance() << "\n";
	}

	myfile.close();
}

TEST_CASE("Searching .csv file", "[functions]"){
	 //getFirstName();
}
