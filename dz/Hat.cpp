#include "Hat.h"
#include "Kid.h"

class Kid;

void Hat::setColor(string color) {
	this->color = color;
}

string Hat::getColor()const {
	return this->color;
}

void Hat::setLenght(double lenght) {
	if (lenght > 0)
		this->lenght = lenght;
	else
		cout << "Wrong input!";
}

double Hat::getLenght() const {
	return this->lenght;
}

void Hat::setMaterial(string material) {
	this->material = material;
}

string Hat::getMaterial()const {
	return this->material;
}

void Hat::setIswinterHat(bool winterHat) {
	this->winterHat = winterHat;
}

bool Hat::getIswinterHat() const {
	return this->winterHat;
}

void Hat::setIssummerHat(bool summerHat) {
	this->summerHat = summerHat;
}

bool Hat::getIssummerHat() const {
	return this->summerHat;
}
void Hat::setIswaterHat(bool waterHat) {
	this->waterHat = waterHat;
}

bool Hat::getIswaterHat() const {
	return this->waterHat;
}
void Hat::setIssewed(bool sewed) {
	this->sewed = sewed;
}

bool Hat::getIssewed() const {
	return this->sewed;
}

void Hat::setDirtness(int dirtness) {
	if (dirtness >= 0 || dirtness <= 100)
		this->dirtness = dirtness;
	else
		cout << "Wrong input!";
}

int Hat::getDirtness() const {
	return this->dirtness;
}

void Hat::protection(Kid& who) {
	if (!summerHat) {
		cout << "This hat cant protect from the sun!\n";
		return;
	}
	cout << "hat is protecting from the sun\n";
	who.wear();
	dirtness -= 10;
}

void Hat::cold() {
	if (!winterHat) {
		cout << "This hat cant protect from coldness!\n";
		return;
	}
	cout << "hat is protecting from cold\n";
	dirtness -= 10;
}

void Hat::water() {
	if (!waterHat) {
		cout << "This hat cant protect from water!\n";
		return;
	}
	cout << "hat is protecting from water\n";
	dirtness -= 10;
}

void Hat::sew() {
	if (sewed) {
		cout << "Hat has already been sewed!\n";
		return;
	}
	cout << "hat is being sewed\n";
	sewed = true;
}

void Hat::washing() {
	if (dirtness > 50) {
		cout << "Hat is clean!\n";
		return;
	}
	cout << "hat is being washed\n";
	dirtness += 50;
}

void Hat::printHat() {
	cout << "Hat changes: \n";
	cout << "Hat dirtness: " << dirtness << endl;
}