#include "functions.hpp"

#include <istream>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>





void getFirstName(){
//opening the TXT file including the names
//ifstream allows up to open a file
std::size_t lineno = 1;
std::ifstream ifs("FirstNames.txt");

//iterate through the lines of the txt file
while(ifs.good()){
	std::string linestr; //the line is a string
	std::getline(ifs, linestr);

	if(linestr.find("Adam") != std::string::npos) {
		std::cout<<"The found word was found on line:----->" << lineno <<std::endl;
	}

	lineno +=1;
}

}

void getLastName(){
	
}