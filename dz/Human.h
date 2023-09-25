#include "all_libraries.h"

class Human {
	double height;
	string eyes_color;
	string name;
	string last_name;
	int energy;
	bool soreThroat;
	int cleanliness;
	int mood;
	int hunger;// 0 - full; 100 - hungry;

public:
	void SetHeight(double height);
	double GetHeight() const;
	void SetEyes_color(string eyes_color);
	string GetEyes_color() const;
	void SetName(string name);
	string GetName() const;
	void SetLastName(string last_name);
	string GetLastName() const;
	void SetEnergy(int energy);
	int GetEnergy() const;
	void SetSoreThroat(bool soreThroat);
	bool GetSoreThroat() const;
	void SetCleanliness(int cleanliness);
	int GetCleanliness() const;
	void SetMood(int mood);
	int GetMood() const;
	void SetHunger(int hunger);
	int SetHunger() const;

public:
	void speaking();
	void eating();
	void dancing();
	void washing();
	void resting();
	void callSomeone();
	void work();
	void printHuman();
};