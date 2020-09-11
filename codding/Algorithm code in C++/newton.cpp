#include<iostream>
#include<math.h>
using namespace std;
float fun(float x)
{  float xn;
    xn=pow(x,3)-5*x+3;
    return xn;
}
float cal(float x)
{
	float xn;
	xn = ((2 * pow(x, 3)) - 3) / ((3 * pow(x, 2)) - 5);
	return xn;
}

int main()
{
	float a,b,p,q,c;
	int i=1;
	again:
    cout<<"Enter the valu of a"<<endl;
    cin>>a;
    cout<<"Enter the valu of b"<<endl;
    cin>>b;
    if(fun(a)*fun(b)>0)
    goto again;
    if(fun(a)<fun(b))
        a=b;

	while(i){

    p=cal(a);
    q=c-p;
    if(q<0)
        q=-q;
	if(q<=0.00001)
	{cout <<"Checking root "<<i<<" is:" << a<<endl;
         break;}

    else
   cout <<"Checking root "<<i<<" is:" << p<<endl;
    a=p;
    c=p;
    i++;
    }


	return 0;

}
