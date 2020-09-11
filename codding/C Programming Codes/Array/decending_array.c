#include<stdio.h>
int main()
{
    int a[100],i,j,n,k,tmp;

   printf("Please input the numbers");
   scanf("%d",&n);
  for(i=0;i<n;i++){
printf("Please input the values %d ",i);

scanf("%d",&a[i]);
 }

for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[j] >a[i])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", a[i]);
    }
	        printf("\n\n");
}








