    #include <stdio.h>

    int main()
    {
      int arr[100], *max, n, i;

      printf("Enter the number of elements in array\n");
      scanf("%d", &n);

      printf("Enter %d integers\n", n);

      for ( i = 0 ; i < n ; i++ )
        scanf("%d", &arr[i]);

      max  = arr;
      *max = *arr;

      for (i = 1; i < n; i++)
      {
        if (*(arr+i) > *max)
        {
           *max = *(arr+i);

        }
      }

      printf("Maximum element  is %d.\n", *max);
      return 0;
    }
