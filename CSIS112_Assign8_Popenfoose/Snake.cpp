// Snake.cpp - holds functions for Snake class
// CSIS 112 B02
// Stacey Popenfoose
#include "Snake.h"
#include <iostream>

Snake::Snake(std::string animalName, int animalAge) {
	setName(animalName);
	setAge(animalAge);
	std::cout << "Invoking the Snake constructor" << std::endl << std::endl;
}
Snake::~Snake() {
	std::cout << "Invoking the Snake destructor" << std::endl;
}

void Snake::move() {
	std::cout << "I slither." << std::endl;
}