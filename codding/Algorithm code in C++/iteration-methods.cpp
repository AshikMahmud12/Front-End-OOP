#include<iostream>
#include<math.h>
using namespace std;

float check(float x)
{
    float q;
    q=pow(x,3)-x-1;
    return q;
}
float cal(float x)
{
	float q;
    q =pow((x+1),(float)1/3);
	return q;
}


int main()
{
	float a, b, c, t, p;
	again:
	cout << "Enter the value of a and b" << endl;
	cin>> a >> b;
    if(check(a)*check(b)>0)
        goto again;
    if(check(a)>check(b))
        a=b;
     while(1)
	{
		c = cal(a);
		t = c - p;
		if (t < 0)
			t = -t;
		if (t <= 0.0001)
		{
			cout << "The root is :" << c << endl;
			break;
		}
		else
			cout << "The root is :" << c << endl;
		a = c;
		p = c;
	}
	return 0;
}
