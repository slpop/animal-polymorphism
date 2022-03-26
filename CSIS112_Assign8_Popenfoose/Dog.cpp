// Dog.cpp - holds functions for Dog class
// CSIS 112 B02
// Stacey Popenfoose
#include "Dog.h"
#include <iostream>

Dog::Dog(std::string animalName, int animalAge) {
	setName(animalName);
	setAge(animalAge);
	std::cout << "Invoking the Dog constructor" << std::endl << std::endl;
}
Dog::~Dog() {
	std::cout << "Invoking the Dog destructor" << std::endl;
}

void Dog::move() {
	std::cout << "I run." << std::endl;
}