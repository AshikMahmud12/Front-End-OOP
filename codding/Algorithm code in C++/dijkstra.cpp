#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#define INF 10000
using namespace std;
int v,a,b,W,d;
int e[30][30],w[30],pre[30];
void Dij_visit(int s)
{
    int i,j;

    for(i=1; i<=v; i++)
    {

        if(e[s][i]>0)
        {
            if(w[i]>w[s]+e[s][i])
            {
                w[i]=w[s]+e[s][i];
                pre[i]=s;
                for(j=1; j<=v; j++)
                {
                    if(pre[j]==i)
                    {
                        Dij_visit(i);
                    }
                }
            }
        }
    }

}
void Dijkstra()
{
    int i,s;
    printf("Enter the source vertex :");
    scanf("%d",&s);
    w[s]=0;
    Dij_visit(s);
    for(i=1; i<=v; i++)
    {

        Dij_visit(i);
    }
    return;
}

int main()
{

    int i,j;
    v=0;
    printf("Enter Number Of edges :");
    scanf("%d",&d);

    for(i=1; i<=30; i++)
    {
        for(j=1; j<=30; j++)
        {

            e[i][j]=0;
        }

    }
    for(i=1; i<=d; i++)
    {
        printf("Edge %d & weight: ",i);
        scanf("%d %d %d",&a,&b,&W);

        e[a][b]=W;
        v=max(v,max(a,b));

    }



    printf("\nAdj Matrix of the Graph is:\n");
    for(i=1; i<=v; i++)
    {
        for(j=1; j<=v; j++)
        {
            printf("%8d ",e[i][j]);
        }
        w[i]=INF;
        pre[i]=-1;
        printf("\n");
    }

    Dijkstra();
    printf("\nlist of Dijkstra is:\n");
    for(i=1; i<=v; i++)
    {
        printf("%d weight %d pre %d",i,w[i],pre[i]);
        printf("\n");
    }
    return 0;
}

