#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions.hpp"
#include <iostream>
#include <fstream>


TEST_CASE("Saving .csv file", "[functions]"){
	std::ofstream myfile;
	myfile.open("data.csv");
	myfile << "This is the first cell in the first column.\n";
	myfile << "a,b,c,\n";
	myfile << "c,s,v,\n";
	myfile.close();
}

TEST_CASE("Searching .csv file", "[functions]"){
	 getFirstName();
}
