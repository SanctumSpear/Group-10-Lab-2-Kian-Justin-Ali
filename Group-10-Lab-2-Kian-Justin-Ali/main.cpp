#include "Truck.h"
#include "Driver.h"
#include "Location.h"
#include <iostream>
int main(void) {
	Driver driver1("Liz", "Brian", 35);

	Location location1(2, 3);

	Truck truck1(driver1, location1, 178534);

	Driver driver2("Mike", "Smith", 69);

	Location location2(5, 2);

	Truck truck2(driver2, location2, 245817);


	Location origin;

	std::cout << "The distance between the two trucks is:" << truck1.distanceFrom(truck2.getLocation()) << std::endl;

	std::cout << "The distance between the truck (with ID = 178534) and the origin is: " << truck1.distanceFrom(origin) << std::endl;

	std::cout << "The distance between the truck (with ID = 245817) and the origin is: " << truck2.distanceFrom(origin) << std::endl;
}