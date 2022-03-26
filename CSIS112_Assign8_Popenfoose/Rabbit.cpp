// Rabbit.cpp - holds functions for Rabbit class
// CSIS 112 B02
// Stacey Popenfoose
#include "Rabbit.h"
#include <iostream>

Rabbit::Rabbit(std::string animalName, int animalAge) {
	setName(animalName);
	setAge(animalAge);
	std::cout << "Invoking the Rabbit constructor" << std::endl << std::endl;
}
Rabbit::~Rabbit() {
	std::cout << "Invoking the Rabbit destructor" << std::endl;
}

void Rabbit::move() {
	std::cout << "I hop." << std::endl;
}