#include <iostream>
#include <string>
#pragma once

class Driver {
	std::string firstName;
	std::string lastName;
	int driverId;
public:
	Driver();
	Driver(std::string firstName, std::string lastName, int driverId);

	void setFirstName(std::string a);
	void setLastName(std::string a);
	void setId(int a);
	std::string getFirstName();
	std::string getLastName();
	int getId();
};