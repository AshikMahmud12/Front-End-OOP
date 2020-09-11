#include <stdio.h>

void main()
{
  int arr1[3][3],arr2[3][3],i,j,n;
  printf("Please input the numbers");
   scanf("%d",&n);



  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }

 printf("\nThe matrix is : \n");
  for(i=0;i<n;i++)
  {
      printf("\n");
      for(j=0;j<n;j++)
           printf("%d\t",arr1[i][j]+arr2[3][3]);
  }
 printf("\n\n");
}
