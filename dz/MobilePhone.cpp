#include "MobilePhone.h"
#include "Human.h"

class Human;

void MobilePhone::setMobileModel(string mobileModel) {
	this->mobileModel = mobileModel;
}

string MobilePhone::getMobileModel()const {
	return this->mobileModel;
}

void MobilePhone::setMobileLenght(double mobileLenght) {
	if (mobileLenght > 0)
		this->mobileLenght = mobileLenght;
	else
		cout << "Wrong input!";
}

double MobilePhone::getMobileLenght() const {
	return this->mobileLenght;
}

void MobilePhone::setMobileWidth(double mobileLenght) {
	if (mobileLenght > 0)
		this->mobileWidth = mobileLenght;
	else
		cout << "Wrong input!";
}

double MobilePhone::getMobileWidth() const {
	return this->mobileWidth;
}

void MobilePhone::setMobileColor(string mobileColor) {
	this->mobileColor = mobileColor;
}

string MobilePhone::getMobileColor()const {
	return this->mobileColor;
}

void MobilePhone::setMobilePrice(double mobilePrice) {
	if (mobilePrice > 0)
		this->mobilePrice = mobilePrice;
	else
		cout << "Wrong input!";
}

double MobilePhone::getMobilePrice() const {
	return this->mobilePrice;
}

void MobilePhone::setChargeLevel(int chargeLevel) {
	if (chargeLevel >= 0 || chargeLevel <= 100)
		this->chargeLevel = chargeLevel;
	else
		cout << "Wrong input!";
}

int MobilePhone::getChargeLevel() const {
	return this->chargeLevel;
}

void MobilePhone::setIsNew(bool isNew) {
	this->isNew = isNew;
}

bool MobilePhone::getIsNew() const {
	return this->isNew;
}

void MobilePhone::ringing(Human& who) {
	if (chargeLevel == 0) {
		cout << "Phone is dead!\n";
		return;
	}
	cout << "mobile is ringing!:\n";
	who.callSomeone();
	chargeLevel -= 10;
}

void MobilePhone::charge() {
	if (chargeLevel > 60) {
		cout << "Phone is charged!\n";
		return;
	}
	cout << "mobile is charging\n";
	chargeLevel += 40;
}

void MobilePhone::music() {
	if (chargeLevel == 0) {
		cout << "Phone is dead!\n";
		return;
	}
	cout << "mobile is playing music\n";
	chargeLevel -= 30;
}

void MobilePhone::lags() {
	if (isNew) {
		cout << "Mobile is okay!\n";
		return;
	}
	cout << "mobile is lagging\n";
	chargeLevel -= 10;
}

void MobilePhone::video() {
	if (chargeLevel == 0) {
		cout << "Phone is dead!\n";
		return;
	}
	cout << "mobile is playing a video\n";
	chargeLevel -= 30;
}

void MobilePhone::printPhone() {
	cout << "Phone changes: \n";
	cout << "Phone charging lvl: " << chargeLevel << endl;
}