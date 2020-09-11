//============================================================================
// Name        : Depth-First Search(BFS).cpp
// Author      : Kevin Stephen Biswas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<stack>
#include<stdio.h>
#include<string.h>
#include<list>
#include<queue>
#include<iomanip>
using namespace std;

//Global Variable:

int adjMatrix[100][100] = { };
int vertex;
int time ;	//this will keep track of the over all time in DFS.
stack <int>myStack;
enum color
{
	white, gray, black
};

//in enum type variable all the value of the variable starts with 0.
//so here white=0,gray=1,black=2.

int prevNode[100];
int disTime[100];
int finTime[100];
color nodeColor[100];


void DFS_Visit(int currNode);
void DFS(int source)//program starts here
{



	// 0=white
	// 1=gray
	// 2=black
	//-1 = Nil/inf
	for (int i = 0; i < vertex; i++)
	{
		nodeColor[i] = white;
		prevNode[i] = -1;
		disTime[i] = -1;
		finTime[i] = -1;
	}


    time=0;


	for (int i = 0; i < vertex; i++)
	{
		if (nodeColor[i] == white)
		{
            DFS_Visit(i);
        }
    }



    cout<<"Previous DiscoverTime FinishTIme"<<endl;
    cout<<"--------------------------------"<<endl;

    for(int i=0;i<vertex;i++)
    {
        cout<<prevNode[i]<<" "<< disTime[i]<<" "<<finTime[i]<<endl;
    }

    cout<<"Tropological Sort:"<<endl;
    while(!myStack.empty())
    {
        cout<<myStack.top()+1<<" "<<flush;
        myStack.pop();
    }
}


void DFS_Visit(int currNode)	//currNode=current visited node(by DFS)
{

    nodeColor[currNode] = gray;
    time = time + 1;
    disTime[currNode] = time;
    for (int i = 0; i < vertex; i++)	//checking all the vertex in the graph
    {
        if (adjMatrix[currNode][i] == 1)//finding the adjacency vertex
        {

            if (nodeColor[i] == white)//processing the adjacency vertex
            {
                cout<<currNode+1<<"->"<<i+1<<" Tree Edge "<<endl;
                prevNode[i]=currNode+1;
                DFS_Visit(i);

            }

            else if (nodeColor[i] == gray)//processing the adjacency vertex
            {

                cout<<currNode+1<<"->"<<i+1<<" Back Edge "<<endl;
            }
            else if (nodeColor[i] == black)//processing the adjacency vertex
            {
                if(disTime[currNode]<disTime[i])
                    cout<<currNode+1<<"->"<<i+1<< " Forward Edge "<<endl;
                else
                    cout<<currNode+1<<"->"<<i+1<< " Cross Edge "<<endl;
            }


        }
    }
    nodeColor[currNode]=black;
    time=time+1;
    finTime[currNode]=time;
    myStack.push(currNode);//inputing the vertex in stack to show later in tropological sort.
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

		int source;//source vertex
		while (true)
		{
			cout << "Enter the Source Vertex:" << flush;
			cin >> source;
			if (source <= 0 || source > vertex)
			{
				cout << "Source value is wrong please Re-Enter" << endl;
			}
			else
			{
				cout << "Source value-> " << source << " has been accepted" << endl;
				break;
			}

		}
		DFS(source - 1); //sending the actual source with for array is less than 1 of what we entered.

		return 0;
	}
	//End of main
