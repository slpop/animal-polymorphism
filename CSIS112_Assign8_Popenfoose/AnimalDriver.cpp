// AnimalDriver.cpp  holds main function
// CSIS 112 B02
// Stacey Popenfoose
#include "Animal.h"
#include "Dog.h"
#include "Rabbit.h"
#include "Fish.h"
#include "Snake.h"
#include <iostream>
using namespace std;

int main() {
	cout << "Stacey Popenfoose - Assignment 8" << endl;
	srand(100);		// seed
	Animal** animalArray = new Animal*[5];	// create array of pointers because Animal class is abstract
	for (int i = 0; i < 5; i++) {
		int animalAge;
		animalAge = rand() % 20 + 1;		// use rand() function to generate random age
		int userChoice;
		cout << "Menu" << endl;		// display options to user
		cout << "1 - Dog" << endl;
		cout << "2 - Rabbit" << endl;
		cout << "3 - Fish" << endl;
		cout << "4 - Snake" << endl;
		cout << "Enter selection: " << endl;		// prompt for animal selection
		cin >> userChoice;
		string animalName;
		cout << "Enter a name for the animal: " << endl;
		cin >> animalName;
		switch (userChoice) {		//Dynamically create object(depending on what the user entered) 
		case 1:
			{
				Dog* dog = new Dog(animalName, animalAge); 	//initialize with constructor
				Dog* dogPtr = dog;	// pointer to be stored
				animalArray[i] = dogPtr; // store pointer in array
			}
			break;
		case 2:
			{
				Rabbit* rabbit = new Rabbit(animalName, animalAge);
				Rabbit* rabbitPtr = rabbit;
				animalArray[i] = rabbitPtr;
			}
			break;
		case 3:
			{
				Fish* fish = new Fish(animalName, animalAge);
				Fish* fishPtr = fish;
				animalArray[i] = fishPtr;
			}
			break;
		case 4:
			{
				Snake* snake = new Snake(animalName, animalAge);
				Snake* snakePtr = snake;
				animalArray[i] = snakePtr;
			}
			break;
		}
	}
	//execute another loop that cycles through the 5 selections and invokes the Move function and also displays the name and age of the animal. 
	for (int j = 0; j < 5; j++) {
		cout << "My name is " << animalArray[j]->getName() << " and I am " << animalArray[j]->getAge() << " years old.";
		cout << endl;
		animalArray[j]->move();
		cout << endl;
	}
	for (int k = 0; k < 5; k++) {	// delete each element of array
		delete animalArray[k];
	}
}