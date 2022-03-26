// Snake.h - header file for Snake derived class
// CSIS 112 B02
// Stacey Popenfoose
#pragma once
#include "Animal.h"

class Snake : public Animal {
public:
	Snake(std::string animalName, int animalAge);
	~Snake();
private:
	void move();
};
