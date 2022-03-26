// Rabbit.h - header file for Rabbit derived class
// CSIS 112 B02
// Stacey Popenfoose
#pragma once
#include "Animal.h"

class Rabbit : public Animal {
public:
	Rabbit(std::string animalName, int animalAge);
	~Rabbit();
private:
	void move();
};