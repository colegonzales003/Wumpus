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

class Player
{
public:
	Player();

	position myPos;

	void movement();

	void checkPos();

	bool alive;

	//bool hasGold;

	//bool hasArrow;

	//void fireArrow();
};

class Wumpus
{
public:
	position hisPos;
	bool alive;
};