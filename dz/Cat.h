#include "all_libraries.h"

class Cat {
	double tail_length = 0.5; //ì
	int ears_count = 2;
	string fur_color = "white";
	string nick = "Snizhok";
	string eyes_color = "blue";
	int energyLevel; //1-100
	int nPows;
	int hungerLevel; //1-100
	bool muteness;

public:
	void makeNoise();
	void walk();
	void eat();
	void printCat();
};