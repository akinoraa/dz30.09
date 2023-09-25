#include "Room.h"
#include "Human.h"

class Human;

void Room::setWidth(double width) {
	if (width > 0)
		this->width = width;
	else
		cout << "Wrong input!";
}

double Room::getWidth() const {
	return this->width;
}

void Room::setHeight(double height) {
	if (height > 0)
		this->height = height;
	else
		cout << "Wrong input!";
}

double Room::getHeight() const {
	return this->height;
}

void Room::setLength(double lenghth) {
	if (lenghth > 0)
		this->lenghth = lenghth;
	else
		cout << "Wrong input!";
}

double Room::getLength() const {
	return this->lenghth;
}

void Room::setWallColor(string wall_color) {
	this->wall_color = wall_color;
}

string Room::getWallColor()const {
	return this->wall_color;
}

void Room::setWindow_amount(int window_amount) {
	if (window_amount > 0)
		this->window_amount = window_amount;
	else
		cout << "Wrong input!";
}

int Room::getWindow_amount() const {
	return this->window_amount;
}

void Room::setWallPainted(bool wallPainted) {
	this->wallPainted = wallPainted;
}

bool Room::getWallPainted() const {
	return this->wallPainted;
}

void Room::setRoomAiring(int roomAiring) {
	if (roomAiring >= 0 || roomAiring <= 100)
		this->roomAiring = roomAiring;
	else
		cout << "Wrong input!";
}

int Room::getRoomAiring() const {
	return this->roomAiring;
}

void Room::setRoomClean(int roomCleanliness) {
	if (roomCleanliness >= 0 || roomCleanliness <= 100)
		this->roomCleanliness = roomCleanliness;
	else
		cout << "Wrong input!";
}

int Room::getRoomClean() const {
	return this->roomCleanliness;
}

void Room::setRoomDecor(bool roomDecor) {
	this->roomDecor = roomDecor;
}

bool Room::getRoomDecor() const {
	return this->roomDecor;
}

void Room::setCanTalk(bool canTalk) {
	this->canTalk = canTalk;
}

bool Room::getCanTalk() const {
	return this->canTalk;
}

void Room::roomPainting(Human& who) {
	if (wallPainted) {
		cout << "Room walls are already painted!\n";
		return;
	}
	cout << "room is being painted!\n";
	who.work();
	wallPainted = true;
	roomAiring -= 70;
}

void Room::roomUsing(Human& who) {
	if (roomAiring <= 30) {
		cout << "Room can't be used! It needs to be aired!\n";
		return;
	}
	cout << "room is being used!\n";
	who.dancing();
	roomCleanliness -= 20;
	roomAiring -= 20;
}

void Room::talking() {
	if (canTalk == 0) {
		cout << "room is not talking!\n";
		roomAiring -= 10;
		return;
	}
	cout << "It's magical room! It can talk!\n";
	roomAiring -= 10;
}

void Room::roomCleaning() {
	if (roomCleanliness > 60) {
		cout << "Room is clean!\n";
		return;
	}
	cout << "room is being cleaned!\n";
	roomCleanliness += 40;
	roomAiring += 20;
}

void Room::roomDecorating() {
	if (roomDecor) {
		cout << "Room is already decorated!\n";
		return;
	}
	cout << "room is being decorated!";
	roomCleanliness -= 40;
}

void Room::printRoom() {
	cout << "Room changes: \n";
	cout << "Room airing: " << roomAiring << endl;
	cout << "roomCleanliness: " << roomCleanliness << endl;
	if (wallPainted) {
		cout << "walls are painted!\n";
	}
	else {
		cout << "walls are not painted!";
	}
	if (roomDecor) {
		cout << "Room is decored!\n";
	}
	else {
		cout << "Room is not decored!";
	}
}