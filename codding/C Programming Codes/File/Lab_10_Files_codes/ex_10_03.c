#include<stdio.h>
int main()
{

    int M[15][7],i,j,sum=0,min=M[0][0];
    float avg;

       FILE *fin;


  fin = fopen("test_data.txt", "r");

    for(i=0;i<15;i++)
    {

        for(j=0;j<7;j++)
        {

             fscanf(fin,"%d",&M[i][j]);
        }

    }
    ;
    for(i=0;i<15;i++)
    {
        printf("\Marks for Student[%d]:\n",i+1);
        for(j=0;j<7;j++)
        {
             printf("Final marks of test[%d]:%d\n",j+1,M[i][j]);
        }

    }
    for(i=0;i<15;i++)
    {

        for(j=0,sum=0;j<7;j++)
        {
            sum=sum+M[i][j];
           if(M[i][j]<min)
            min=M[i][j];
        }


        sum=sum-min;
        avg=sum/6.0;
        printf("\nStudent[%d] final marks average:%f",i+1,avg);

    }


     fclose(fin);
    return 0;
}

