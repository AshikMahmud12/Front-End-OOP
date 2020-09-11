#include<stdio.h>
int main()
{
    int M[5][3],i,j,sum=0;
    float avg;
 //   float avg;
    printf("Input:");
    for(i=0;i<5;i++)
    {
        printf("\nEnter marks for Student[%d]:\n",i+1);
        for(j=0;j<3;j++)
        {
             printf("Enter marks for Class-Test[%d]:",j+1);
             scanf("%d",&M[i][j]);
        }

    }
    printf("Output:\n");
    for(i=0;i<5;i++)
    {
        printf("\Marks for Student[%d]:\n",i+1);
        for(j=0;j<3;j++)
        {
             printf("Class-Test[%d]:%d\n",j+1,M[i][j]);
        }

    }
    for(i=0;i<5;i++)
    {

        for(j=0,sum=0;j<3;j++)
        {
            sum=sum+M[i][j];
        }
        avg=sum/3.0;
        printf("\nStudent[%d] class test average:%f",i+1,avg);

    }
    for(i=0;i<3;i++)
    {
        for(sum=0,j=0;j<5;j++)
        {
            sum=sum+M[j][i];
        }
        avg=sum/5.0;
        printf("\nAverage of class-test[%d] is %f",i+1,avg);

    }
/*    max=min=a[0];
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
    printf("Maximum=%d, Minimum=%d,Sum=%d,Average=%f",max,min,sum,avg);*/
    return 0;
}
