#include <iostream>
#include "student.h"

Student::Student(){
	firstName = "";
	lastName = "";
	creditHours = 0;

}

void Student::init(std::string fName, std::string lName, std::string street, std::string city, std::string state, std::string zip, std::string bDate, std::string gDate, int credits){
	firstName = fName;
	lastName = lName;
	homeAddress.init(street, city, state, zip);
	birthDate.init(bDate);
	gradDate.init(gDate);
	creditHours = credits;
}

void Student::printStudent(){
	std::cout << firstName << " " << lastName << std::endl;
	homeAddress.printAddress();
	birthDate.printDate();
	gradDate.printDate();
	std::cout << creditHours << std::endl;
}
