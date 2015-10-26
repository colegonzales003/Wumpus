#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


struct position
{
	int x;
	int y;
};

class Cell
{
public:
	position location;

	Cell();

	//void printGrid();
};



int calcDist(position player, position wumpus);

class Player
{
public:
	Player();



	position myPos;

	void movement();

	//void checkPos(Player myPos, Wumpus hisPos, Pit fallyPos, Gold goalPos);

	bool alive;

	bool hasGold;

	bool hasArrow;

	//void fireArrow()
	//{
	//	position arrowTarget;
	//}

};

class Wumpus
{
public:
	Wumpus();
	position hisPos;
	bool alive;
	//void playerEaten();
};

class Pit
{
public:
	Pit();
	position fallyPos;
	void playerDeath();
};

class Gold
{
	Gold();
	position goalPos;
};