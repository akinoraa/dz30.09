#include "Human.h"

void Human::SetHeight(double height) {
	if (height < 0 || height > 300) {
		cout << "Wrong input!\n";
	}
	else {
		this->height = height;
	}
}

double Human::GetHeight() const {
	return this->height;
}

void Human::SetEyes_color(string eyes_color) {
	this->eyes_color = eyes_color;
}

string Human::GetEyes_color() const {
	return this->eyes_color;
}

void Human::SetName(string name) {
	this->name = name;
}

string Human::GetName() const {
	return this->name;
}

void Human::SetLastName(string last_name) {
	this->last_name = last_name;
}

string Human::GetLastName() const {
	return this->last_name;
}

void Human::SetEnergy(int energy) {
	if (energy < 0 || energy>100) {
		cout << "Wrong input!\n";
	}
	else {
		this->energy = energy;
	}
}

int Human::GetEnergy() const {
	return this->energy;
}

void Human::SetSoreThroat(bool soreThroat) {
	this->soreThroat = soreThroat;
}

bool Human::GetSoreThroat() const {
	return this->soreThroat;
}

void Human::SetCleanliness(int cleanliness) {
	if (cleanliness < 0 || cleanliness>100) {
		cout << "Wrong input!\n";
	}
	else {
		this->cleanliness = cleanliness;
	}
}

int Human::GetCleanliness() const {
	return this->cleanliness;
}

void Human::SetMood(int mood) {
	if (mood < 0 || mood>100) {
		cout << "Wrong input!\n";
	}
	else {
		this->mood = mood;
	}
}

int Human::GetMood() const {
	return this->mood;
}

void Human::SetHunger(int hunger) {
	if (hunger < 0 || hunger>100) {
		cout << "Wrong input!\n";
	}
	else {
		this->hunger = hunger;
	}
}

int Human::SetHunger() const {
	return this->hunger;
}

void Human::speaking() {
	if (soreThroat) {
		cout << name << " has a sore throat! " << name << " can't speak!\n";
		return;
	}
	cout << name << " " << last_name << " is talking!\n";
	energy -= 10;
}

void Human::eating() {
	if (hunger > 80) {
		cout << name << " is full!\n";
		return;
	}
	cout << name << " " << last_name << " is eating!\n";
	hunger += 30;
}

void Human::dancing() {
	if (energy < 30) {
		cout << name << " is tired!\n";
		return;
	}
	cout << name << " " << last_name << " is dancing!\n";
	energy -= 30;
	mood += 30;
	cleanliness -= 20;
}

void Human::washing() {
	if (cleanliness > 50) {
		cout << name << " is clean!\n";
		return;
	}
	cout << name << " " << last_name << " is in a shower!\n";
	cleanliness += 50;
	mood += 10;
}

void Human::resting() {
	if (energy > 80) {
		cout << name << " is not tired!\n";
		return;
	}
	cout << name << " " << last_name << " is resting!\n";
	energy += 30;
	mood += 20;
}

void Human::callSomeone() {
	if (mood < 30) {
		cout << name << " is in a bad mood! Doesn't want to call anybody!\n";
		return;
	}
	cout << "'Hi! " << name << " " << last_name << " is here!'\n";
	energy -= 10;
}

void Human::work() {
	if (energy < 50) {
		cout << name << " can't work! Too tired!\n";
		return;
	}
	cout << name << " " << last_name << " is working here!\n";
	energy -= 40;
	mood -= 10;
	hunger -= 30;
}

void Human::printHuman() {
	cout << "Human changes: \n";
	cout << "Energy: " << energy << endl;
	cout << "Hunger: " << hunger << endl;
	cout << "Mood: " << mood << endl;
	cout << "cleanliness: " << cleanliness << endl;
}