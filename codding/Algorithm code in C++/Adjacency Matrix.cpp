//============================================================================
// Name        : Adjacency.cpp
// Author      : Kevin Stephen Biswas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>
using namespace std;

int adjMatrix[100][100] =
{ };
int vertex;

int main()
{

	cout << "Enter the Number of  Vertex: " << flush;
	cin >> vertex;

	while (true)
	{
		int x, y;
		cout << "Edge(x,y):" << flush;
		cin >> x >> y;

		if (x == 0 && y == 0)
		{
			break;
		}
		else if (x <= 0 || y <= 0 || x > vertex || y > vertex)
		{
			cout << "Warning!!!: Invalid Input of Edge(x,y)" << endl;
		}

		else
		{
			adjMatrix[x - 1][y - 1] = 1;
			adjMatrix[y - 1][x - 1] = 1;
		}
	} //End of While[loop]

	cout << "Adjacency Matrix of the Graph:" << endl;
	for (int i = 0; i < vertex; i++)
	{
		for (int j = 0; j < vertex; j++)
		{
			cout <<" " <<adjMatrix[i][j] <<" "<< flush;
		}
		cout << endl;
	} //End of For[loop]
	return 0;
}
