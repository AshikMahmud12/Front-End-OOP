#include<bits/stdc++.h>
using namespace std;

int main ()
{
    float xy=0, x=0, y=0, xx=0,a,b;
    int n,i;
    printf("Enter the number of value of x and y\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value of x%d\n",i+1);
        scanf("%f",&a);
        printf("Enter the value of y%d\n",i+1);
        scanf("%f",&b);
        x=x+a;
        y=y+b;
        xy=xy+a*b;
        xx=xx+a*a;
    }
    b=(n*xy-x*y)/(n*xx-x*x);
    a=(y-b*x)/n;
    printf("a=%f\nb=%f",a,b);
    return 0;
}
