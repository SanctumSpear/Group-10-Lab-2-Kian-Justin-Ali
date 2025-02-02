#pragma once
#include "Driver.h"
#include "Location.h"
class Truck {
private:
	Driver driver;
	Location location;
	int truckId;
public:
	Truck();
	Truck(Driver driver, Location location, int truckId);
	//getterz
	Location getLocation();
	Driver getDriver();
	int getTruckId();
	//setterz
	void setLocation(Location location);
	void setDriver(Driver driver);
	void setTruckId(int id);

	//functions
	double distanceFrom(Location location);
};

