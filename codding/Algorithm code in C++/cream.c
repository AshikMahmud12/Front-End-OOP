#include<stdio.h>

float cal (float a[100][100])
{
    float y;
    y=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])+a[0][1]*(a[1][2]*a[2][0]-a[2][2]*a[1][0])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
    return y;
    }

int main ()
{   float a[100][100],b[100][100],c[100][100],d[100][100],p[100];
    int i,j;
    printf("Enter three equation Ex: ax+by+cz=q\n");
     for(i=0;i<3;i++)
     {
         printf("Enter %d  equation\n",i+1);
         for(j=0;j<3;j++)
        scanf("%f",&a[i][j]);
        scanf("%f",&p[i]);
     }

      for(i=0;i<3;i++)
            for(j=0;j<3;j++)
      {
          b[i][j]=a[i][j];
          c[i][j]=a[i][j];
          d[i][j]=a[i][j];

      }
      b[0][0]=p[0];
      b[1][0]=p[1];
      b[2][0]=p[2];

     c[0][1]=p[0];
      c[1][1]=p[1];
      c[2][1]=p[2];

      d[0][2]=p[0];
      d[1][2]=p[1];
      d[2][2]=p[2];

      printf("X=%f\nY=%f\nZ=%f",cal(b)/cal(a),cal(c)/cal(a),cal(d)/cal(a));



}
