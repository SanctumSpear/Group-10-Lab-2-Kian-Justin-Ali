#include "Driver.h"
#include <iostream>
#include <string>
Driver::Driver() {
	this->firstName = "";
	this->lastName = "";
	this->Id = 0;
}
void Driver::setFirstName(std::string a) {
	this->firstName = a;
}
void Driver::setLastName(std::string a) {
	this->lastName = a;
}
void Driver::setId(int a) {
	this->Id = a;
}
std::string Driver::getFirstName() {
	return this->firstName;
}
std::string Driver::getLastName() {
	return this->lastName;
}
int Driver::getId() {
	return this->Id;
}