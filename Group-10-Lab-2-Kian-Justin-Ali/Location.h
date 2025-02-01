#pragma once

class Driver {
	char firstName;
	char lastName;
	int Id;
public:
	Driver();
	void setFirstName(char a);
    void setLastName(char a);
	void setId(int a);
	char getFirstName();
	char getLastName();
	int getId();
};