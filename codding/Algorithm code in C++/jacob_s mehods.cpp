#include<bits/stdc++.h>
#define fx(y,z) (17-y+2*z)/20
#define fy(x,z) (-18-3*x+z)/20
#define fz(x,y) (25-2*x+3*y)/20
#define check .000001
using namespace std;

int main()
{
    float x=0,y=0,z=0,px,py,pz;

    while(1)
    {
    px=fx(y,z);
    py=fy(x,z);
    pz=fz(x,y);
    if(fabs(x-px)<check&&fabs(y-py)<check&&fabs(z-pz)<check)
    {
        printf("X=%f\tY=%f\tZ=%f\n",px,py,pz);
        break;
    }

    x=px;
    y=py;
    z=pz;
    printf("X=%f\tY=%f\tZ=%f\n",x,y,z);

    }
    return 0;
}
