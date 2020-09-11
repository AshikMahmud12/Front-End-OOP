#include<stdio.h>
int main()
{
    int a[100],i,max,min,sum=0,n;
    float avg;
    printf("How many values:");
    scanf("%d",&n);
    printf("Enter values:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("Output:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]:%d\n",i,a[i]);
    }
    max=min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    for(i=0;i<n;i++)
        sum+=a[i];
    avg=(float)sum/n;
    printf("Maximum=%d, Minimum=%d,Sum=%d,Average=%f",max,min,sum,avg);
    return 0;
}
