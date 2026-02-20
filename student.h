#include <string>
#include "address.h"
#include "date.h"

#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

class Student{
	private:
		std::string firstName;
		std::string lastName;
		Address homeAddress;
		Date birthDate;
		Date gradDate;
		int credits;
	public:
		Student();
		void init(std::string fName, std::string lName, std::string street, std::string city, std::string state, std::string zip, std::string bDate, std::string gDate, int credits);
		void printStudent();
}

