#include<iostream>
using namespace std;

float fun(float x)
{
	float p;
	p = x*x*x - 4*x-9;
	return p;

}


float cal(float a, float b)
{
	float c;
	c = a-((b-a) /( fun(b) - fun(a)))*fun(a);
	return c;
}

int main()
{
	float a, b, c, p, t;
	again:
	cout << "Enter the value of a and b" << endl;
	cin >> a >> b;
	if (fun(a)*fun(b)>0)
	{
		cout << "Can't possible. Try agani..." << endl;
		goto again;
	}
	while (1)
	{
		c = cal(a,b);
          t=c-p;
		if(p>c)
		   t=-t;

		if (t<=0.0001)
		{
			cout << "The root is " << c << endl;
			break;
		}
		else
			cout << "The root is " << c << endl;
		if (fun(a)*fun(c) < 0)
			b = c;
		else if(fun(a)*fun(c)>0)
			a = c;
            p = c;
	}

	return 0;
}
