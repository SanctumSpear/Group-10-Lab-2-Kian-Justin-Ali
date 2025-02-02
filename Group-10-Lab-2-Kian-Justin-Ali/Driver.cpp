#include "Driver.h"
#include <iostream>
#include <string>
Driver::Driver() {
	this->firstName = "";
	this->lastName = "";
	this->driverId = 0;
}
Driver::Driver(std::string firstName, std::string lastName, int driverId) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->driverId = driverId;
}

void Driver::setFirstName(std::string a) {
	this->firstName = a;
}
void Driver::setLastName(std::string a) {
	this->lastName = a;
}
void Driver::setId(int a) {
	this->driverId = a;
}
std::string Driver::getFirstName() {
	return this->firstName;
}
std::string Driver::getLastName() {
	return this->lastName;
}
int Driver::getId() {
	return this->driverId;
}