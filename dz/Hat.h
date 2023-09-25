#include "all_libraries.h"

class Kid;

class Hat {
	string color;
	double lenght;
	string material;
	bool winterHat;
	bool summerHat;
	bool waterHat;
	int dirtness;
	bool sewed;

public:
	void setColor(string color);
	string getColor() const;
	void setLenght(double lenght);
	double getLenght() const;
	void setMaterial(string material);
	string getMaterial()const;
	void setIswinterHat(bool winterHat);
	bool getIswinterHat() const;
	void setIssummerHat(bool summerHat);
	bool getIssummerHat() const;
	void setIswaterHat(bool waterHat);
	bool getIswaterHat() const;
	void setIssewed(bool sewed);
	bool getIssewed() const;
	void setDirtness(int dirtness);
	int getDirtness() const;
	void protection(Kid& who);
	void cold();
	void water();
	void sew();
	void washing();
	void printHat();
};