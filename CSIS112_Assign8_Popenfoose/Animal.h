// Animal.h - header file for Animal base class
// CSIS 112 B02
// Stacey Popenfoose
#pragma once
#include <string>

class Animal {
public:
	// constructors and destructor
	Animal();
	Animal(std::string animalName, int animalAge);
	~Animal();
	// setters and getters
	void setName(std::string animalName);
	std::string getName();
	void setAge(int age);
	int getAge();
	// pure virtual function
	virtual void move() = 0;
private:
	std::string name;
	int age;
};