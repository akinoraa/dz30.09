#include "all_libraries.h"

class Human;

class Room {
	double width;
	double height;
	double lenghth;
	string wall_color;
	int window_amount;
	bool wallPainted;
	int roomAiring;
	int roomCleanliness;
	bool roomDecor;
	bool canTalk;

public:
	void setWidth(double width);
	double getWidth() const;
	void setHeight(double height);
	double getHeight() const;
	void setLength(double lenghth);
	double getLength() const;
	void setWallColor(string wall_color);
	string getWallColor()const;
	void setWindow_amount(int window_amount);
	int getWindow_amount() const;
	void setWallPainted(bool wallPainted);
	bool getWallPainted() const;
	void setRoomAiring(int roomAiring);
	int getRoomAiring() const;
	void setRoomClean(int room);
	int getRoomClean() const;
	void setRoomDecor(bool roomDecor);
	bool getRoomDecor() const;
	void setCanTalk(bool canTalk);
	bool getCanTalk() const;

	//поведінка (методи класу, функції класу)
public:
	void roomPainting(Human& who);
	void roomUsing(Human& who);
	void talking();
	void roomCleaning();
	void roomDecorating();
	void printRoom();
};