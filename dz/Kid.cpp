#include "Kid.h"
#include "Cat.h"
class Cat;

void Kid::setName(string name) {
	this->name = name;
}

string Kid::getName()const {
	return this->name;
}

void Kid::setHairColor(string hairColor) {
	this->hairColor = hairColor;
}

string Kid::getHairColor()const {
	return this->hairColor;
}

void Kid::setEyesColor(string eyesColor) {
	this->eyesColor = eyesColor;
}

string Kid::getEyesColor()const {
	return this->eyesColor;
}

void Kid::setAge(int age) {
	if (age >= 0 || age <= 100)
		this->age = age;
	else
		cout << "Wrong input!";
}

int Kid::getAge() const {
	return this->age;
}

void Kid::setGoodMood(int goodMood) {
	if (goodMood >= 0 || goodMood <= 100)
		this->goodMood = goodMood;
	else
		cout << "Wrong input!";
}

int Kid::getChargeLevel() const {
	return this->goodMood;
}

void Kid::setEnergyLvl(int energyLvl) {
	if (energyLvl >= 0 || energyLvl <= 100)
		this->energyLvl = energyLvl;
	else
		cout << "Wrong input!";
}

int Kid::getEnergyLvl() const {
	return this->energyLvl;
}

void Kid::setHaveHat(int haveHat) {
	if (haveHat >= 0 || haveHat <= 100)
		this->haveHat = haveHat;
	else
		cout << "Wrong input!";
}

int Kid::getHaveHat() const {
	return this->haveHat;
}

void Kid::fun() {
	if (energyLvl < 30) {
		cout << name << " is too tired to have fun!\n";
		return;
	}
	cout << name << " is having fun\n";
	goodMood += 30;
	energyLvl -= 30;
}

void Kid::game(Cat& who) {
	if (energyLvl < 30) {
		cout << name << " is too tired to play!\n";
		return;
	}
	cout << name << " is playing with a cat!\n";
	who.makeNoise();
	goodMood += 40;
	energyLvl -= 20;
}

void Kid::cry() {
	if (goodMood > 30) {
		cout << name << " is okay!\n";
		return;
	}
	cout << name << " is crying\n";
	goodMood -= 10;
	energyLvl -= 30;
}

void Kid::run() {
	if (energyLvl < 30) {
		cout << name << " is too tired to run!\n";
		return;
	}
	cout << name << " is running\n";
	goodMood += 10;
	energyLvl -= 40;
}

void Kid::learn() {
	if (energyLvl < 30) {
		cout << name << " is too tired to learn!\n";
		return;
	}
	cout << name << " is learning\n";
	goodMood -= 10;
	energyLvl -= 30;
}

void Kid::wear() {
	if (!haveHat) {
		cout << name << " doesn't have a hat to wear!\n";
		return;
	}
	cout << "'I'm wearing a hat to be protected!'\n";
	goodMood += 10;
}

void Kid::printKid() {
	cout << "Kid changes: \n";
	cout << "good mood lvl: " << goodMood << endl;
	cout << "Energy level: " << energyLvl << endl;
}