#include<stdio.h>
#include<math.h>

double aaa(double x)
{
    return (x*x*x - 3*x - 5);
}

int main()
{
    double x0,x1,mid,epsilon=.0000001;
    printf("Enter the value of x0 and x1\n");
    scanf("%lf %lf",&x0,&x1);

    printf("\nx0 and x1 value are: %lf  %lf\n",x0,x1);

    do
    {
        mid=(x0+x1)/2;
        double c=aaa(x1);
        double a=aaa(mid);

        if(c*a >= 0)
        {
            x1=mid;
        }
        else
        {
            x0=mid;
        }
    }while(x1-x0>epsilon);

    double root=(x1+x0)/2;
    printf("\nAppropriate root is:%lf\n",root);

    return 0;

}











