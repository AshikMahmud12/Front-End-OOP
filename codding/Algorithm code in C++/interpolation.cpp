#include <cstdio>
#include <cstdlib>
#include <cmath>
/*
The code is developed by
Imtiajul Islam
2014-3-60-081

The code is checked for following the values
5
1951
46
1961
66
1971
81
1981
93
1991
101
81
*/

int main()
{
    float a[10], b[10], del[10][10];
    short n;
    int i, j, N, temp1;

    scanf("%d", &n);
    for(i=0;i<n; i++)
    {
        printf("Enter x[%d]: ", i);
        scanf("%f", &a[i]);
        printf("Enter y[%d]: ", i);
        scanf("%f", &b[i]);
    }
    printf("Enter the estimated values of y: ");
    scanf("%d", &N);
    //ans 1
    for(i=0; i<n; i++)
    {
        if(N==b[i])
        {
            printf("The differences of the values is: %.2f \n", b[i]-b[i-1]);
            temp1=i;
        }

    }
    // ans 2
    //del
    for(i=0; i<n; i++)
    {
        if(i>0)
        {
            for(j=0; j<n-i; j++)
            {
            del[i][j]= del[i-1][j+1]-del[i-1][j];
            }
        }
        else
        {
            for(j=0; j<n-i; j++)
            {
                del[i][j]=b[j+1]-b[j];
            }
        }

    }
    for(i=0; i<n; i++)
    {
        printf("\ndel%d\n", i+1);

        for(j=0; j<n-i-1; j++)
        {
            printf("del[%d][%d]: %f\n\n", i, j, del[i][j]);
        }
        putchar('\n');
    }



    int h, flag=0;
    float sderivate=0;
    h=a[1]-a[0];
    for(i=0; i<n; i++)
    {
        if((a[i+1]-a[i])==h)
            flag=1;
    }
    if(flag==0)
        printf("The diffirence of x is not equel\nTherefore, the formula is used for this method is 'Lagrange's'\n");
    else
    {
        //can't use recursion function
        printf("\nDifference(h) is: %d\n\n", h);

        //the second derivatives creates some bugs but it could be because of less time
        if(temp1<2)
        {
            printf("The formula is Forword Interpolation\n\n");
            sderivate=((1/(h*h))*(del[1][0]-del[2][0]+(11*del[3][0])/12));
            printf("The second derivatives of the formula is : %.2f\n", sderivate);
        }

        else if(temp1==n/2)
        {
            printf("The formula is Stirling's Interpolation\n\n");
            sderivate=((1/(h*h))*(del[1][1]-del[3][1]));
            printf("The second derivatives of the formula is : %.2f\n", sderivate);
        }

        else
        {
            printf("The formula is Backword Interpolation\n\n");
            sderivate=((1/(h*h))*(del[1][n-1]-del[2][n-1]+(11*del[3][n-1])/12));
            printf("The second derivatives of the formula is : %.2f\n", sderivate);
        }


    }

    return 0;
}
