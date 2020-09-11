#include<bits/stdc++.h>
using namespace std;

int vertex[100][100],NumberrOfVertex,Distance[100][100],prev[100],weight[100],NumberOfEdge;

bool bellmanford(int source)
{
    queue<int> Q,damiq;
    Q.push(source);
    int cunt=0;
    while(!Q.empty())
    {
        source=Q.front();
        Q.pop();
        for(int i=1; i<=NumberrOfVertex; i++)
        {
            //cout<<Distance[source][i]<<"\t"<<weight[source]<<endl;
            if(Distance[source][i]!=100000&&weight[i]>Distance[source][i]+weight[source])
            {
                weight[i]=Distance[source][i]+weight[source];
                prev[i]=source;
                if(weight[i]<weight[source])
                {
                    cunt=source;
                    for(int k=1; k<=NumberrOfVertex; k++)
                    {
                        cunt=prev[cunt];
                        if(cunt==0)
                        {
                            break;
                        }
                        else if((k==NumberrOfVertex&&source!=0)||cunt==source)
                        {

                            return false;
                        }
                    }

                }
                Q.push(i);
                //cout<<"Vertex: "<<source<<" to "<<i<<" Distance: "<<weight[i]<<endl;
            }
        }
    }
    return true;
}

void path(int source)
{
    if(prev[source]==-1)
    {
        cout<<source<<"\t";
        return;
    }
    path(prev[source]);
    cout<<source<<"\t";
}

int main()
{
    int ver1,ver2,weightof;
    FILE *fin= fopen("bell.txt","r");
    bool belman;

    //cout<<"Input Number of Vertex: ";
    fscanf(fin,"%d",&NumberOfEdge);

    for(int i=0; i<NumberOfEdge; ++i)
    {
        for(int j=0; j<NumberOfEdge; ++j)
        {
            Distance[i][j]=100000;
        }
    }

    NumberrOfVertex=-1;
    for(int i=0; i<NumberOfEdge; ++i)
    {
        fscanf(fin,"%d%d%d",&ver1,&ver2,&weightof);
        Distance[ver1][ver2]=weightof;
        NumberrOfVertex= max(ver1,max(ver2,NumberrOfVertex));
    }
    for(int i=1; i<=NumberrOfVertex; i++)
    {
        weight[i]=100000;
    }
    for(int i=1; i<=NumberrOfVertex; i++)
    {
        for(int j=1; j<=NumberrOfVertex; j++)
        {
            cout<<Distance[i][j]<<"\t";
        }
        cout<<endl;
    }
    int source=1;
    cout<<"\nInput the source:\t";
    cin>>source;

    weight[source]=0;
    prev[source]=-1;
    belman=bellmanford(source);

    if(belman==true)
    {
        cout<<endl;
        for(int i=1; i<=NumberrOfVertex; i++)
        {
            cout<<i<<"\t";
        }
        cout<<endl;
        for(int i=1; i<=NumberrOfVertex; i++)
        {
            cout<<weight[i]<<"\t";
        }
        cout<<endl;
    }
    else
    {
        cout<<"\nThis is a negative weighted cycle graph. can not find any shortest path\n";
    }

    //cout<<"Path from "<<source<<" to vertex:\t";
    //int pat;
    //cin>>pat;
//    path(pat);
}
