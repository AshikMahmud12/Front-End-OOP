#include<iostream>
using namespace std;
int  nullcheck(int a[100][100],int p,int q)
 {

    int i,j;
    for(i=0;i<p;i++)
      {
          for(j=0;j<q;j++)
    {
        if(a[i][j]!=0)
        {
            cout<<"Not null"<<endl;
            return 0;
        }
    }}
    cout<<"Null matrix"<<endl;
    return 0;
}
int square(int p,int q)
{
    if(p==q)
        cout<<"Square "<<endl;
    else
        cout<<"Not square"<<endl;
        return 0;
}
int diagonal(int a[100][100],int p,int q)
{
    int i,j,c[10],f=0;
    if(p!=q)
        {cout<<"Not diagonal"<<endl;
          return 0;}
        for(i=0;i<p;i++)
        for(j=0;j<q;j++)
          if(i==j)
            {if(a[i][j]==0)
           {cout<<"Not Diagonal\n";
            return 0;}
            }
           else
           {if(a[i][j]!=0)
             {cout<<"Not Diagonal\n";
            return 0;}
           }
       cout<<"Diogonal"<<endl;
}

int unit(int a[100][100],int p,int q)
{
    int i,j,c[10],f=0;
      if(p!=q)
        {cout<<"Not unit"<<endl;
          return 0;}
        for(i=0;i<p;i++)
        for(j=0;j<q;j++)
          if(i==j)
            {if(a[i][j]!=1)
           {cout<<"Not unit matrix\n";
            return 0;}
            }
           else
           {if(a[i][j]!=0)
             {cout<<"Not Diagonal\n";
            return 0;}
           }
       cout<<"Diogonal"<<endl;
}
int scalar(int a[100][100],int p,int q)
{
    int i,j,c[10],f=0;
        if(p!=q)
        {cout<<"Not scalar"<<endl;
          return 0;}
        for(i=0;i<p;i++)
        for(j=0;j<q;j++)
          if(i!=j)
            {if(a[i][j]!=0)
           {cout<<"Not scalar\n";
            return 0;}
            }
 for(i=0;i<p-1;i++)
        for(j=0;j<q-1;j++)
            if(i==j)
           {if(a[i][j]!=a[i+1][j+1])
             {cout<<"Not scalar\n";
            return 0;}
           }
       cout<<"scalar"<<endl;
}
int main ()
{
    int a[100][100],i,j,che,m,n,k,l=1;
    again:
    cout<<"Enter raw and column"<<endl;
    cin>>m>>n;

    cout<<"Enter the matrix"<<endl;
    for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
    {
        cin>>a[i][j];
    }}
    cout<<"The matrix is :"<<endl;
        for(i=0;i<m;i++)
        {


        for(j=0;j<n;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;}
     while(l){
    cout<<"\n\n\nEnter the option for checking"<<endl;
    cout<<"1.for Null matrix"<<endl;
    cout<<"2.for Square matrix"<<endl;
    cout<<"3.for Diagonal matrix "<<endl;
    cout<<"4. for unit matrix "<<endl;
    cout<<"5. for scalar matrix"<<endl;
    cout<<"6. for Enter new matrix"<<endl;
    cout<<"7. exit"<<endl;
    cin>>che;

    switch(che)
    {
     case 1:
       nullcheck(a,m,n);
        break;
     case 2:
        square(m,n);
        break;
     case 3:
       diagonal(a,m,n);
        break;
     case 4:
        unit(a,m,n);
        break;
     case 5:
        scalar(a,m,n);
        break;
     case 6:
        goto again;
     case 7:
        return 0;
     default:
        cout<<"Wrong input"<<endl;
    }
   l++;}
}
