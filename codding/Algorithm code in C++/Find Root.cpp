#include<stdio.h>
#include<math.h>

double root(double x)
{
    return x*x+2*x+1;
}

int main()
{
    double num1,num2,lPosition,rPosition,middlePoint,abc,p=.0000001;

    printf("Enter the num1 and num2:");
    scanf("%lf %lf",&num1,&num2);

    printf("Number is:%lf %lf",num1,num2);
do{
    middlePoint=(num1+num2)/2;
    lPosition=root(num1);
    rPosition=root(num2);
    abc=root(middlePoint);

    if(lPosition*abc<0){
        lPosition=middlePoint;
    }
    else{
        rPosition=middlePoint;
    }
    } while((rPosition-lPosition)>p);


    printf("\nRoot is %lf:",middlePoint);
}



















