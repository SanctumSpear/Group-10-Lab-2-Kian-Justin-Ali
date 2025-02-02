#include "Truck.h"
#include "Location.h"
#include <math.h>

//constructorz
Truck::Truck() {
	this->driver = Driver();
	this->location = Location();
	this->truckId = 0;
}

Truck::Truck(Driver driver, Location location, int truckId) {
	this->driver = driver;
	this->location = location;
	this->truckId = truckId;
}
//getterz
Location Truck::getLocation() {
	return this->location;
}
Driver Truck::getDriver() {
	return this->driver;
}
int Truck::getTruckId() {
	return this->truckId;
}
//setterz
void Truck::setLocation(Location location) {
	this->location = location;
}
void Truck::setDriver(Driver driver) {
	this->driver = driver;
}
void Truck::setTruckId(int truckId) {
	this->truckId = truckId;
}
//functionz
double Truck::distanceFrom(Location location) {
	double distanceX = pow((this->location.getX() - location.getX()), 2);
	double distanceY = pow((this->location.getY() - location.getY()), 2);

	return sqrt(distanceX + distanceY);
}