#include "Cat.h"

void Cat::makeNoise() {
	if (muteness) {
		cout << "Cat can't make sound!\n";
		return;
	}
	cout << "MEOW!\n";
	energyLevel -= 10;
}

void Cat::walk() {
	if (nPows <= 2) {
		cout << "Cat doesn't have enough legs to walk!\n";
		return;
	}
	else if (energyLevel < 20) {
		cout << "Cat is tired!\n";
		return;
	}
	cout << "Cat walks!\n";
	energyLevel -= 20;
}

void Cat::eat() {
	if (hungerLevel > 80) {
		cout << "Cat is full!\n";
		return;
	}
	cout << "Cat eats " << endl;
	hungerLevel += 30;
}

void Cat::printCat() {
	cout << "Cat changes: \n";
	cout << "Energy: " << energyLevel << endl;
	cout << "Hunger: " << hungerLevel << endl;
}