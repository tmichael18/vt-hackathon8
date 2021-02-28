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
	myfile << "index,first_name,last_name,street_number,street_address,city,state,zip_code,initial_balance,1_deposit,2_deposit,3_deposit"
		   <<"4_deposit,5_deposit,6_deposit,7_deposit,8_deposit,9_deposit,10_deposit,11_deposit,12_deposit,";
	for (int i = 1; i < 10; i++) {

		std::string deposits = getDeposit();
		double income = getIncomeBasedOnDeposit(deposits);

		myfile << i << "," << getFirstName() << "," << getLastName() << "," << getStreetNum()
			<< "," << getStreetAddress() << "," << getCity() << "," << getState()
			<< "," << getZipCode() << "," << getInitialBalance(deposits) << "," << deposits << ","
			//<< "," << getDeposit() << "," << getDeposit() << "," << getDeposit()
			//<< "," << getDeposit() << "," << getDeposit() << "," << getDeposit()
			//<< "," << getDeposit() << "," << getDeposit() << "," << getDeposit()
			//<< "," << getDeposit() << "," << getDeposit() 
			/*
			<< "," << getWithdrawal(deposits)
			<< "," << getWithdrawal(deposits) << "," << getWithdrawal(deposits) << "," << getWithdrawal(deposits)
			<< "," << getWithdrawal(deposits) << "," << getWithdrawal(deposits) << "," << getWithdrawal(deposits)
			<< "," << getWithdrawal(deposits) << "," << getWithdrawal(deposits) << "," << getWithdrawal(deposits)
			<< "," << getWithdrawal(deposits) << "," << getWithdrawal(deposits) << "," */
			<< getLoans(deposits)
			<< "," << getLoans(deposits) << "," << getLoans(deposits) << "," << getLoans(deposits)
			<< "," << getLoans(deposits) << "," << getLoans(deposits) << "," << getLoans(deposits)
			<< "," << getLoans(deposits) << "," << getLoans(deposits) << "," << getLoans(deposits)
			<< "," << getLoans(deposits) << "," << getLoans(deposits) << "," << getPurchases(deposits)
			<< "," << getPurchases(deposits) << "," << getPurchases(deposits) << "," << getPurchases(deposits)
			<< "," << getPurchases(deposits) << "," << getPurchases(deposits) << "," << getPurchases(deposits)
			<< "," << getPurchases(deposits) << "," << getPurchases(deposits) << "," << getPurchases(deposits)
			<< "," << getPurchases(deposits) << "," << getPurchases(deposits) << "," << getBalance()
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
	double income = getIncomeBasedOnDeposit(deposits);
	
	//file for testing
	myfile << "This is the random percentage1: " << getRandomPercentage() << "\n";
	myfile << "This is the random percentage2: " << getRandomPercentage() << "\n";
	myfile << "This is the random percentage3: " << getRandomPercentage() << "\n";
	myfile << "This is the random percentage4: " << getRandomPercentage() << "\n";
	myfile << "This is the random percentage5: " << getRandomPercentage() << "\n\n";
	myfile << "This is the get income tester deposit: " << deposits << "\n";
	myfile << "This is the get income tester income: " << getIncomeBasedOnDeposit(deposits) << "\n";

	int count = 0;
	int target = 0;
	for (std::size_t i = 0; i < 1001; i++) {

		double percent = getRandomPercentage();
		//myfile << "This is the RandomLinearizationTest: " << getRandomNormalLinearizedVariable(5000, 1000, percent) << "\n";
		//myfile << "This is the RandomLinearizationTest Percent: " << percent << "\n";
		target = getRandomNormalLinearizedVariable(5000, 1000);
		if (target < 6000 && target > 4000) {

			count++;
		}

	}
	myfile << "This is the RandomLinearizationTest Count: " << count << "\n";

	myfile.close();
}

TEST_CASE("creating Antonio's test2.csv file", "[functions]") {

	//std::ofstream myfile;
	//myfile.open("test2.csv");
	//myfile << "This is the first cell in the first column.\n";

	//Input any testing you need done here, avoid changing anything else, feel free to add whatever you need
	//when you are done we can either have you attempt to push or you can send your changes to me
}
