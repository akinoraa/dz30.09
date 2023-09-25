#include "all_libraries.h"

class Human;

class MobilePhone {
	string mobileModel;
	double mobileLenght;
	double mobileWidth;
	string mobileColor;
	double mobilePrice;
	int chargeLevel;
	bool isNew;

public:
	void setMobileModel(string mobileModel);
	string getMobileModel()const;
	void setMobileLenght(double mobileLenght);
	double getMobileLenght() const;
	void setMobileWidth(double mobileLenght);
	double getMobileWidth() const;
	void setMobileColor(string mobileColor);
	string getMobileColor()const;
	void setMobilePrice(double mobilePrice);
	double getMobilePrice() const;
	void setChargeLevel(int chargeLevel);
	int getChargeLevel() const;
	void setIsNew(bool isNew);
	bool getIsNew() const;
	void ringing(Human& who);
	void charge();
	void music();
	void lags();
	void video();
	void printPhone();
};