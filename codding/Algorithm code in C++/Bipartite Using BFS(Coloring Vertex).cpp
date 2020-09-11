//============================================================================
// Name        : Breadth-First Search(BFS).cpp
// Author      : Kevin Stephen Biswas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<list>
#include<queue>
#include<iomanip>
using namespace std;

//Global Variable:

int adjMatrix[100][100] = { };
int vertex;

enum color
{
	white, gray, black
};

//in enum type variable all the value of the variable starts with 0.
//so here white=0,gray=1,black=2.

void BFS(int source)
{
	int prevNode[100], distance[100];
	color nodeColor[100];

	queue<int> myQueue;

	// 0=white
	// 1=gray
	// 2=black
	//-1 = Nil/inf
	for (int i = 0; i < vertex; i++)
	{
		nodeColor[i] = white;
		prevNode[i] = -1;
		distance[i] = -1;
	}

	//setting source node value
	nodeColor[source] = gray;
	prevNode[source] = -1;
	distance[source] = 0;

	myQueue.push(source);

	while (!myQueue.empty())
	{
		int u = myQueue.front();
		myQueue.pop();
		for (int i = 0; i < vertex; i++)
		{
			if (adjMatrix[u][i] == 1 && adjMatrix[i][u] == 1)//check if its an adjacent of u vertex
			{
				if (nodeColor[i] == white)//if the adjacent vertex of u is white colored
				{
					nodeColor[i] = gray;
					distance[i] = distance[u] + 1;//increase the discance by 1 from its parent vertex
					prevNode[i] = u+1;//because node starts form 1 not zero(0)
					myQueue.push(i);
				}
			}
		}

		nodeColor[u] = black;

	}

	cout << "Breadth-First Search(BFS) Output:" << endl;
	cout << "---------------------------------" << endl;
	cout << setw(8) << "Vertex" << flush;
	for (int i = 0; i < vertex; i++)
	{
		cout << " " << i+1 << flush;//increment 1 because array starts with 0 but our vertex starts with 1
	} //End of For[loop]
	cout<<endl;

	cout << setw(8) << "Color" << flush;
	for (int i = 0; i < vertex; i++)
	{
		cout << " " << nodeColor[i] << flush;
	} //End of For[loop]
	cout<<endl;

	cout << setw(8) << "dis" << flush;
	for (int i = 0; i < vertex; i++)
	{
		cout << " " << distance[i] << flush;
	} //End of For[loop]
	cout<<endl;

	cout << setw(8) << "prev" << flush;
	for (int i = 0; i < vertex; i++)
	{
		cout << " " << prevNode[i] << flush;
	} //End of For[loop]
	cout<<endl;
}


void Bipartite(int source)
{

    enum bipColor
    {
        white,red,blue
    };
    bipColor color[100];
    bool bipartite=true;
    int prevNode[100], distance[100];


	for (int i = 0; i < vertex; i++)
	{
		color[i] = white;
		prevNode[i] = -1;
		distance[i] = -1;
	}

	//setting source node value
	color[source] = red;
	prevNode[source] = -1;
	distance[source] = 0;

    queue<int> myQueue;
	myQueue.push(source);

    while (!myQueue.empty())
	{
		int u = myQueue.front();
		myQueue.pop();
		for (int i = 0; i < vertex; i++)
		{
			if (adjMatrix[u][i] == 1 && adjMatrix[i][u] == 1)//check if its an adjacent of u vertex
			{

                    if (color[i] == white)//if the adjacent vertex of u is white colored
                    {
                        if(color[u]==red)
                        {
                            color[i] = blue;
                        }

                        if(color[u]==blue)
                        {
                            color[i] = red;
                        }

                        distance[i] = distance[u] + 1;//increase the discance by 1 from its parent vertex
                        prevNode[i] = u+1;//because node starts form 1 not zero(0)
                        myQueue.push(i);
                    }
                    else if(color[u]==color[i])
                    {
                        bipartite=false;
                       break;
                    }



			}
		}
	}

	if(bipartite==true)
	{
        for(int i=0;i<vertex;i++)
        {
            if(color[i]==white)
            {
                bipartite=false;
            }
        }
    }


    //printing is the graph bipartite or not.

    if(bipartite==true)
    {
        cout<<"Graph is Bipartite"<<endl;
    }
    else
    {
        cout<<"Graph is Not Bipartite"<<endl;
    }

}
//Start of main
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
			cout << " " << adjMatrix[i][j] << " " << flush;
		}
		cout << endl;
	} //End of For[loop]

	int source; //source vertex
	while(true)
	{
		cout << "Enter the Source Vertex:" << flush;
			cin >> source;
		if(source<=0 || source>vertex)
		{
			cout<<"Source value is wrong please Re-Enter"<<endl;
		}
		else
		{
			cout<<"Source value-> "<<source<<" has been accepted"<<endl;
			break;
		}

	}
	BFS(source-1);//sending the actual source with for array is less than 1 of what we entered.
    Bipartite(source-1);

	return 0;
} //End of main
