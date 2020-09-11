#include<stdio.h>
int main()
{
    int a[100],i,j=0,n, a1[10],a2[10],k=0;

   printf("Please input the numbers");
   scanf("%d",&n);
  for(i=0;i<n;i++){
printf("Please input the values %d ",i);

scanf("%d",&a[i]);
 }


          for(i=0;i<n;i++){

           if(a[i]%2==0){
        a1[j]=a[i];
        j++;

        }
        else
           {

            a2[k]=a[i];
            k++;
           }
          }
        printf("Even \n");{
         for(i=0;i<j;i++)
        printf("%d ",a1[i]);
        printf("\n");
        }
        printf("Odd \n");{
         for(i=0;i<k;i++)
            printf("%d ",a2[i]);
        }





}


