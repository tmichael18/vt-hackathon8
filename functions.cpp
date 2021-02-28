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

//supporting function used to get income
double getIncomeBasedOnDeposit(std::string s_deposit) {

	std::string income;
	double r_income;

	for (std::size_t i = 0; i < s_deposit.size(); i++) {

		if (s_deposit[i] == ',') {

			income = s_deposit.erase(i);
		}
	}

	r_income = stod(income);
	r_income *= 12;
	return r_income;
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
	}
	else if (weight < 19.3) {

		//gets random number between 10000 and 14999
		deposit = rand() % 5000 + 10000;
		deposit /= 12;
	}
	else if (weight < 33.2) {

		//gets random number between 15000 and 24999
		deposit = rand() % 10000 + 15000;
		deposit /= 12;
	}
	else if (weight < 45.0) {

		//gets random number between 25000 and 34999
		deposit = rand() % 10000 + 25000;
		deposit /= 12;
	}
	else if (weight < 59.5) {

		//gets random number between 35000 and 49999
		deposit = rand() % 15000 + 35000;
		deposit /= 12;
	}
	else if (weight < 76.4) {

		//gets random number between 50000 and 74999
		deposit = rand() % 25000 + 50000;
		deposit /= 12;
	}
	else if (weight < 85.6) {

		//gets random number between 75000 and 99999
		deposit = rand() % 25000 + 75000;
		deposit /= 12;
	}
	else if (weight < 94) {

		//gets random number between 100000 and 149999
		deposit = rand() % 50000 + 100000;
		deposit /= 12;
	}
	else if (weight < 96.9) {

		//gets random number between 150000 and 199999
		deposit = rand() % 50000 + 150000;
		deposit /= 12;
	}
	else if (weight < 99.7) {

		//gets random number between 200000 and 500000
		deposit = rand() % 300000 + 200000;
		deposit /= 12;
	}
	else if (weight < 100.0) {

		//gets random number between 500000 and 1000000
		deposit = rand() % 500000 + 500000;
		deposit /= 12;
	}

	t_deposit = (double)deposit + getDecimal();
	std::string s_deposit = std::to_string(t_deposit);

	//need to get rid of tailing 0's
	for (std::size_t i = 0; i < s_deposit.size(); i++) {

		bool remove = false;

		if (s_deposit[i] == '.') {

			remove = true;
			i += 3;
		}

		if (remove == true) {

			s_deposit.erase(i);
		}
	}

	std::string r_deposit = s_deposit + ',' + s_deposit + ',' + s_deposit + ',' + s_deposit + ','
						  + s_deposit + ',' + s_deposit + ',' + s_deposit + ',' + s_deposit + ','
						  + s_deposit + ',' + s_deposit + ',' + s_deposit + ',' + s_deposit + ','
						  + s_deposit + ',' + s_deposit + ',' + s_deposit + ',' + s_deposit;
	return r_deposit;
	//return r_deposit;
}

int getInitialBalance(std::string deposit) { //this is weight based

	int balance = (int)getIncomeBasedOnDeposit(deposit);
	return balance;
}

int getWithdrawal(double income) {

	double weight = getRandomPercentage();
	int withdraws = 0;
	

	//using if else sytax
	if (weight < 10.0) {

		withdraws = rand() % 10001;
	}
	else if (weight < 20.0) {

		
	}
	else if (weight < 30.0) {

		
	}
	else if (weight < 45.0) {

		
	}
	else if (weight < 60.0) {

		
	}
	else if (weight < 75.0) {

		
	}
	else if (weight < 85.0) {

		
	}
	else if (weight < 94.0) {

		
	}
	else if (weight < 97.0) {

		
	}
	else if (weight < 99.7) {

		
	}
	else if (weight < 100.0) {

		
	}


	return 0;
}

double getLoans(double income) {

	double weight = getRandomPercentage();
	return 0;
}

double getPurchases(double income) {

	double weight = getRandomPercentage();
	return 0;
}

double getBalance() {

	double weight = getRandomPercentage();
	return 0;
}

void Test() {

//     std::string s_deposit = "2855255.5252";
//     std::string * s_deposit_p = &s_deposit;
//     // std::cout << s_deposit_p << std::endl;
//     printf("%s\n",s_deposit_p);


//     double IntDeposit = std::stod(s_deposit_p->c_str());

//     std::cout << "stod(\"" << s_deposit << "\") is "
//     << IntDeposit << '\n';

//     printf("%f\n",IntDeposit);


//     double * IntDeposit_p = &IntDeposit;    
//     printf("The double pointer is :%f\n",IntDeposit_p);

//     //need to get rid of tailing 0's
//     std::string CutString = "123,45";

//     for (std::size_t i = 0; i < CutString.size(); i++) {

//         bool remove = false;

//         if (CutString[i] == ',') {

//             remove = true;
//             i ++;
//         }

//         if (remove == true) {

//             CutString.erase(i-1);
//         }

//     }

//     printf("%s\n",CutString.c_str() );
// }


// int myint1 = stoi(str1); 
// int myint2 = stoi(str2); 
// int myint3 = stoi(str3); 

// cout << "stoi(\"" << str1 << "\") is "
// << myint1 << '\n'; 


//data is based on Deposits*12 
//based on that assign this value to Normal distribution according to savings (centered around savings)


//ex 24 000
//savings would be 0 in 6000$

}



