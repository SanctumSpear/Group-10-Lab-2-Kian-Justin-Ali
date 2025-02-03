#include "Location.h"

//Constructors
Location::Location() {
	this->x = 0;
	this->y = 0;
}
Location::Location(int x, int y) {
	this->x = x;
	this->y = y;
}

//Setters
void Location::setX(int x) {
	this->x = x;
}
void Location::setY(int y) {
	this->y = y;
}

//Getters
int Location::getX() {
	return this->x;
}
int Location::getY() {
	return this->y;
}