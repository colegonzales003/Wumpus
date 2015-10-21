#include "Header.h"

Cell::Cell()
{
	//This is the Cell constructor.
}

Player::Player()
{
	myPos = { 0, 0 };
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
			if (nextX < 0 || nextX > 4)
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
			if (nextX < 0|| nextX > 4)
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
			if (nextY < 0 || nextY > 4)
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
			if (nextY < 0 || nextY > 4 )
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
}