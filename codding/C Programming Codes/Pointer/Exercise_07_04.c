    #include <stdio.h>

    int main()
    {
      int arr[100], *min, n, i,*p,sum=0;
      float avg;
      printf("Enter the number of elements in array\n");
      scanf("%d", &n);

      printf("Enter %d integers\n", n);

      for ( i = 0 ; i < n ; i++ )
        scanf("%d", &arr[i]);

       p=arr;

    	for(i=0;i<n;i++){
        sum=sum+*(p+i);

	avg=(float)sum/n;

	}





      min  = arr;
      *min = *arr;
      for (i = 0; i < n; i++)
      {
        if (*(arr+i) < *min)
        {
           *min = *(arr+i);

        }
      }

      printf("Average is  %0.2f Minimum element  is %d.\n", avg, *min);
      return 0;
    }

