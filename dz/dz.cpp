#include "all_libraries.h"

#include "Cat.h"
#include "Kid.h"
#include "Human.h"
#include "MobilePhone.h"
#include "Hat.h"
#include "Room.h"

int main()
{
	Human  human;
	Human h, h1, h2;
	MobilePhone ph;
	Hat hat;
	Kid k;
	Room r;
	Cat c;
	int a;
	double ad;
	string as;

	// h1.name = "Max";
	// h2.name = "Mark";

	// cout << "1) ";
	// ph.ringing(h);

	// cout << "\n2) ";
	// hat.protection(k);

	// cout << "\n3) ";
	// r.roomUsing(h1);

	// cout << "\n4) ";
	// k.game(c);

	// cout << "\n5) ";
	// r.roomPainting(h);

	//homework 12.09

	/*c.energyLevel = 100;
	c.nPows = 4;
	c.hungerLevel = 100;
	c.muteness = false;

	c.printCat();
	c.makeNoise();
	c.walk();
	c.eat();
	c.printCat();

	c.energyLevel = 10;
	c.nPows = 1;
	c.hungerLevel = 10;
	c.muteness = true;

	c.printCat();
	c.makeNoise();
	c.walk();
	c.eat();
	c.printCat();*/

	ad = 180;
	human.SetHeight(ad);

	as = "brown";
	human.SetEyes_color(as);

	as = "Max";
	human.SetName(as);

	as = "Smith";
	human.SetLastName(as);

	a = 100;
	human.SetEnergy(a);

	a = 1;
	human.SetSoreThroat(a);

	a = 100;
	human.SetCleanliness(a);

	a = 10;
	human.SetHunger(a);

	a = 100;
	human.SetMood(a);

	human.printHuman();
	human.speaking();
	human.eating();
	human.dancing();
	human.washing();
	human.resting();
	human.callSomeone();
	human.work();
	human.printHuman();

	a = 10;
	human.SetEnergy(a);

	a = 0;
	human.SetSoreThroat(a);

	a = 100;
	human.SetCleanliness(a);

	a = 10;
	human.SetHunger(a);

	a = 10;
	human.SetMood(a);

	human.printHuman();
	human.speaking();
	human.eating();
	human.dancing();
	human.washing();
	human.resting();
	human.callSomeone();
	human.work();
	human.printHuman();

	ad = 3.5;
	r.setWidth(ad);
	ad = 2.3;
	r.setHeight(ad);
	ad = 4.6;
	r.setLength(ad);
	as = "blue";
	r.setWallColor(as);
	a = 2;
	r.setWindow_amount(a);
	a = 0;
	r.setWallPainted(a);
	a = 100;
	r.setRoomAiring(a);
	a = 10;
	r.setRoomClean(a);
	a = 0;
	r.setRoomDecor(a);
	r.setCanTalk(a);

	r.printRoom();
	//r.roomPainting(h1);
	//r.roomUsing(h1);
	r.talking();
	r.roomCleaning();
	r.roomDecorating();
	r.printRoom();

	a = 1;
	r.setWallPainted(a);
	a = 10;
	r.setRoomAiring(a);
	a = 100;
	r.setRoomClean(a);
	a = 1;
	r.setRoomDecor(a);
	r.setCanTalk(a);

	r.printRoom();
	//r.roomPainting(h1);
	//r.roomUsing(h1);
	r.talking();
	r.roomCleaning();
	r.roomDecorating();
	r.printRoom();

	as = "Iphone";
	ph.setMobileModel(as);
	ad = 10.5;
	ph.setMobileLenght(ad);
	ad = 4.5;
	ph.setMobileWidth(ad);
	as = "white";
	ph.setMobileColor(as);
	ad = 20000;
	ph.setMobilePrice(ad);
	a = 100;
	ph.setChargeLevel(a);
	a = 0;
	ph.setIsNew(a);

	ph.printPhone();
	ph.ringing(h1);
	ph.charge();
	ph.music();
	ph.lags();
	ph.video();
	ph.printPhone();

	a = 10;
	ph.setChargeLevel(a);
	a = 1;
	ph.setIsNew(a);

	ph.printPhone();
	ph.ringing(h1);
	ph.charge();
	ph.music();
	ph.lags();
	ph.video();
	ph.printPhone();

	as = "Carl";
	k.setName(as);
	as = "black";
	k.setHairColor(as);
	as = "blue";
	k.setEyesColor(as);
	a = 10;
	k.setAge(a);
	a = 100;
	k.setGoodMood(a);
	k.setEnergyLvl(a);
	a = 1;
	k.setHaveHat(a);

	k.printKid();
	k.fun();
	k.game(c);
	k.cry();
	k.run();
	k.learn();
	k.wear();
	k.printKid();

	k.setGoodMood(a);
	k.setEnergyLvl(a);
	a = 0;
	k.setHaveHat(a);

	k.printKid();
	k.fun();
	k.game(c);
	k.cry();
	k.run();
	k.learn();
	k.wear();
	k.printKid();

	/*string color = "red";
	  double lenght = 15.5;
	  string material = "cotton";
	  bool winterHat;
	  bool summerHat;
	  bool waterHat;
	  int dirtness;
	  bool sewed;*/

	as = "red";
	hat.setColor(as);
	ad = 15.5;
	hat.setLenght(ad);
	as = "cotton";
	hat.setMaterial(as);
	a = 1;
	hat.setIswinterHat(a);
	hat.setIssummerHat(a);
	hat.setIswaterHat(a);
	a = 0;
	hat.setIssewed(a);
	a = 100;
	hat.setDirtness(a);

	hat.printHat();
	hat.protection(k);
	hat.cold();
	hat.water();
	hat.sew();
	hat.washing();
	hat.printHat();

	a = 0;
	hat.setIswinterHat(a);
	hat.setIssummerHat(a);
	hat.setIswaterHat(a);
	a = 1;
	hat.setIssewed(a);
	a = 10;
	hat.setDirtness(a);

	hat.printHat();
	hat.protection(k);
	hat.cold();
	hat.water();
	hat.sew();
	hat.washing();
	hat.printHat();
}