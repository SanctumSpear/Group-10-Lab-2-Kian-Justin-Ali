#pragma once
#include <iostream>

class Location {
	int x;
	int y;
public:

	//Constructors
	Location();
	Location(int x, int y);

	//Setters
	void setX(int x);
	void setY(int y);

	//Getters
	int getX();
	int getY();
};