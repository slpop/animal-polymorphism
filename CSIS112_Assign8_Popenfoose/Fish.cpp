// Fish.cpp - holds functions for Fish class
// CSIS 112 B02
// Stacey Popenfoose
#include "Fish.h"
#include <iostream>

Fish::Fish(std::string animalName, int animalAge) {
	setName(animalName);
	setAge(animalAge);
	std::cout << "Invoking the Fish constructor" << std::endl << std::endl;
}
Fish::~Fish() {
	std::cout << "Invoking the Fish destructor" << std::endl;
}

void Fish::move() {
	std::cout << "I swim." << std::endl;
}