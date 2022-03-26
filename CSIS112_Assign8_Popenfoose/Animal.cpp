// Animal.cpp - holds functions for Animal base class
// CSIS 112 B02
// Stacey Popenfoose
#include "Animal.h"
#include <iostream>

Animal::Animal() {
	age = 0;
	std::cout << "Invoking the default Animal constructor" << std::endl;
}
Animal::Animal(std::string animalName, int animalAge) {
	setName(animalName);
	setAge(animalAge);
	std::cout << "Invoking the 2-argument Animal constructor" << std::endl;
}
Animal::~Animal() {
	std::cout << "Invoking the default Animal destructor" << std::endl;
}

void Animal::setName(std::string animalName) {
	name = animalName;
}
std::string Animal::getName() {
	return name;
}

void Animal::setAge(int animalAge) {
	age = animalAge;
}
int Animal::getAge() {
	return age;
}