#include <iostream>
#include "address.h"

Address::Address(){
	street = "";
	city = "";
	state = "";
	zip = "";
}

void Address::init(std::string stuStreet, std::string stuCity, std::string stuState, std::string stuZip){
	street = stuStreet;
	city = stuCity;
	state = stuState;
	zip = stuZip;
}

void Address::printAddress(){
	std::cout << street << std::endl;
	std::cout << city << ", " << state << " " << zip << std::endl;
}
