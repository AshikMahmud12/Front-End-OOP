#include<stdio.h>
int main()
{
    int a[100],i,j,n,max,min;

   printf("Please input the numbers");
   scanf("%d",&n);
  for(i=0;i<n;i++){
printf("Please input the values %d ",i);

scanf("%d",&a[i]);
 }
      max=a[0],min=a[0];

          for(i=0;i<n;i++){

           if(a[i]>max)
            max=a[i];
            if(a[i]<min)
            min=a[i];
          }

            printf("Max:%d ",max);
           printf("Min:%d ",min);


}

