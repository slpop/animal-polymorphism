// Fish.h - header file for Fish derived class
// CSIS 112 B02
// Stacey Popenfoose
#pragma once
#include "Animal.h"

class Fish : public Animal {
public:
	Fish(std::string animalName, int animalAge);
	~Fish();
private:
	void move();
};