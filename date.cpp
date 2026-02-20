#include <iostream>
#include <sstream>
#include "date.h"

Date::Date(){
	month = 0;
	day = 0;
	year = 0;
}

void Date::init(std::string dateString){
	std::stringstream converter;
	std::string sMonth;
	std::string sDay;
	std::string sYear;

	converter.str(dateString);
	getline(converter, sMonth, '/');
	getline(converter, sDay, '/');
	getline(converter, sYear);

	converter.clear();
	converter.str("");

	converter << sMonth << " " << sDay << " " << sYear;
	converter >> month >> day >> year;
}

void Date::printDate(){
	std::string months[13] = {
            "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
       	};
	std::cout << months[month] << " " << day << " " << year << std::endl;
}
