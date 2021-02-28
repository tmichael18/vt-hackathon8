
#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <string>

std::string getLastName();
std::string getFirstName();

std::string getStreetNum();

//TODOS
std::string getStreetAddress();
std::string getCity();
std::string getState();
std::string getZipCode();

int getInitialBalance(std::string deposit); // currently returns income

std::string getDeposit();
int getWithdrawal(double income);
double getLoans(double income);
double getPurchases(double income);
double getBalance();

//other supporting functions
double getRandomPercentage();
double getDecimal();
double getIncomeBasedOnDeposit(std::string s_deposit);

void Test();


#endif
