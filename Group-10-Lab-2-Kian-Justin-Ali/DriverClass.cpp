#include "Location.h"
#include <iostream>
Driver::Driver() {
	firstName;
	lastName;
	Id;
}
	void Driver::setFirstName(char a) {
		firstName = a;
	}
	void Driver::setLastName(char a) {
		lastName = a;
	}
	void Driver::setId(int a) {
		Id = a;
	}
	char Driver::getFirstName() {
		return firstName;
	}
	char Driver::getLastName() {
		return lastName;
	}
	int Driver::getId() {
		return Id;
	}