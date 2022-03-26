// Dog.h - header file for Dog derived class
// CSIS 112 B02
// Stacey Popenfoose
#pragma once
#include "Animal.h"
class Dog : public Animal {
public:
	Dog(std::string animalName, int animalAge);
	~Dog();
private:
	void move();
};