
#include<stdio.h>

int main()
{
int i,j,n,m;
float x[20],y[20],d[20],a,h,u,b,z=1.0,k=0.0,p;

printf("Enter the no.s of entries i.e n:\n");
scanf("%d",&n);

printf("Enter the value of x.\n");
for(i=0;i<=n-1;i++)
{
scanf("%f",&x[i]);
}

printf("Enter the value of y.\n");
for(i=0;i<=n-1;i++)
{
scanf("%f",&y[i]);
}


/*
for(i=1;i<=n;i++)
{
d[i][0]=y[i]-y[i-1];
}

for(j=1;j<=n-2;j++)
{
for(i=j+1;i<=n-1;i++)
{
d[i][j]=d[i][j-1]-d[i-1][j-1];
}
}

printf("%f %f\n",x[0],y[0]);
for(i=1;i<=n-1;i++)
{
printf("%f %f",x[i],y[i]);
for(j=0;j<=i-1;j++)
{
printf(" %f",d[i][j]);
}
printf("\n");
}

*/


printf("Enter the value of x for which y is required\n");
scanf("%f",&a);
for(i=0;a>=x[i];i++)
{
m=i;
}
m++;
h=x[1]-x[0];
p=(a-x[m])/h;

for(i=0;i<=m-1;i++)
{
z*=(p+i)/(i+1);
k+=(z*d[i]);
}
b=y[m]+z;
printf("\n The value of y at %f = %f\n",a,b);
return 0;
}


