#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<list>
#include<queue>

using namespace std;
//int main(){
int mat,i,j,k,m,W;
//void W(int D[100][100])
int main()
{


    printf("Input matrix size: ");
    scanf("%d",&m);
    printf("\n");

    int L1[100][100];

    printf("Input Matrix L1: \n");
    for(i=0; i<m; i++)
    {
        printf("Row %d: ",i+1);
        for(j=0; j<m; j++)
        {
            scanf("%d",&L1[i][j]);
        }
    }
    printf("\n");
    W(L1);

    printf("\n\n");
    return 0;
}

void W(int D[100][100])
{
    for(k=0; k<m; k++)
    {
    for(i=0; i<5; i++)
    {
    for(j=0; j<5; j++)
    {
    if(D[i][k] + D[k][j] < D[i][j])
    {
    D[i][j] = D[i][k] + D[k][j];
    }}
    }
    }
    for(i=0; i<5; i++)
    {
    for(j=0; j<5; j++)
        {
            printf("%d ",D[i][j]);
        }
        printf("\n");
    }
}






