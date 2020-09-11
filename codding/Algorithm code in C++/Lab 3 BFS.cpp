#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
#include<list>
#include<queue>

using namespace std;
int v;
int matrix[101][101];

void BFS(int s);

int main()
{
	int i,j,mx,mxv,mn,mnv,k,s;

	memset(matrix,0,sizeof(matrix));

	printf("Input Number of Vertex: ");
	scanf("%d",&v);

	k=1;

	while(1)
	{
        printf("Edge %d: ",k);
		int a,b;

		scanf("%d%d",&a,&b);

		if(a==0 || b==0)
        {
            printf("Enter the source node: ");
            scanf("%d",&s);
            break;
        }
        if(a < 1 || a > v || b < 1 || b > v)
        {
            printf("Invalid Input");
        }
        else
        {
            matrix[a][b]=1;
            k++;
        }

	}

    BFS(s);

	return 0;
}

void BFS(int s)
{
    queue<int> Q;
	int i,j,v,u,num;
	int clr[101],dis[101],p[101];

	for(i=0;i<=v;i++)
    {
        clr[i]=0;
        dis[i]=200000000;
        p[i]=-1;
    }

    clr[s]=1;
    dis[s]=0;

	Q.push(s);

	while(!Q.empty())
	{
		u=Q.front();
		Q.pop();

		for(i=1;i<=v;i++)
		{
			if(matrix[u][i] == 1 && clr[i]== 0)
			{
				clr[i]= 1;
				dis[i]= dis[u]+1;
				p[i]= u;

				Q.push(i);
			}
		}

		clr[u]=2;
	}
	

}
