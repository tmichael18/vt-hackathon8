
#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <string>

std::string getLastName();
std::string getFirstName();

std::string getStreetNum();

//TODOS
std::string getStreetAddress(); //returns address string from file
std::string getCity();
std::string getState();
std::string getZipCode();

int getInitialBalance(std::string deposit); // currently returns income

std::string getDeposit();
//int getWithdrawal(std::string deposit);
double getLoans(std::string deposit);
double getPurchases(std::string deposit);
double getBalance();

//other supporting functions
double getRandomPercentage();
double getDecimal();
double getIncomeBasedOnDeposit(std::string s_deposit);
double getRandomNormalLinearizedVariable(double mean, double stddev);

void Test();


#endif
