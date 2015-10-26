#include "Header.h"

Cell::Cell()
{
	//This is the Cell constructor.
}

int calcDist(Player a, Wumpus b)
{
	//This set of code explains the math for finding distance between two objects on the grid.
	position dist;
	dist.x = a.myPos.x - b.hisPos.x;
	dist.y = a.myPos.y - b.hisPos.y;

	return sqrt(dist.x * dist.x + dist.y * dist.y);
}

Player::Player()
{
	myPos = { 0, 0 };
	bool alive = true;
	bool hasGold = false;
	bool hasArrow = true;
}

void Player::movement()
{
	char input;

	cout << "Make your move." << endl;
	cin >> input;

	switch (input)
	{
		case 'w':
		{
			int nextX = myPos.x - 1;
			if (nextX < 0 || nextX > 3)
			{
				cout << "You hit a wall. Make another move." << endl;
				break;
			}
			
			else
			{
				Player::myPos.x = Player::myPos.x - 1;
				cout << "Your position is now " << Player::myPos.x << ", " << Player::myPos.y << endl;
				break;
			}
		}

		case 's':
		{
			int nextX = myPos.x + 1;
			if (nextX < 0|| nextX > 3)
			{
				cout << "You hit a wall. Make another move." << endl;
				break;
			}

			else
			{
				Player::myPos.x = Player::myPos.x + 1;
				cout << "Your position is now " << Player::myPos.x << ", " << Player::myPos.y << endl;
				break;
			}
		}

		case 'a':
		{
			int nextY = myPos.y - 1;
			if (nextY < 0 || nextY > 3)
			{
				cout << "You hit a wall. Make another move." << endl;
				break;
			}

			else
			{
				Player::myPos.y = Player::myPos.y - 1;
				cout << "Your position is now " << Player::myPos.x << ", " << Player::myPos.y << endl;
				break;
			}
		}

		case 'd':
		{
			int nextY = myPos.y + 1;
			if (nextY < 0 || nextY > 3 )
			{
				cout << "You hit a wall. Make another move." << endl;
				break;
			}

			else
			{
				Player::myPos.y = Player::myPos.y + 1;
				cout << "Your position is now " << Player::myPos.x << ", " << Player::myPos.y << endl;
				break;
			}
		}
		
	}

	if(calcDist())
}

//
//void Player::fireArrow()
//{
//	char input;
//
//	cout << "Would you like to fire your arrow?" << endl;
//	cin >> input;
//
//	if (input = 'y')
//	{
//		char direction;
//		cout << "Which direction would you like to fire your arrow? W = up /nS = down /nA = Left /nD = right" << endl;
//		cin >> direction;
//
//		switch (direction)
//		{
//		case 'w':
//			{
//				
//			}
//		}
//	}
//}

Wumpus::Wumpus()
{
	position hisPos = {3, 3};
	bool alive = true;
}

Gold::Gold()
{
	goalPos = { 4, 3 };
}