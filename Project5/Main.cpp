#include "Header.h"
using namespace std;


void genGrid(int a, Cell g[])
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			g[j].location.y = j;
			g[i].location.x = i;

			cout << "(" << g[i].location.x << ", " <<
				g[j].location.y << ")  ";
		}
		cout << endl;
	}
}

int main()
{
	Cell* cell;
	cell = new Cell[16];
	genGrid(4, cell);
	Player bob;

	bob.alive = true;

	while (bob.alive == true)
	{
		bob.movement();

	}

	system("pause");

}