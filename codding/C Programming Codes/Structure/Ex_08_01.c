#include<stdio.h>
struct company{
char name[30];
//float term_marks[3];
float income;
float cost;
float profit;
};
int main()
{
    struct company s[3];
    int i,j,n;
    float profit;
    //float sum[3]={0,0,0};
   printf("Enter how many companies:");
   scanf("%d", &n);
    for(j=0;j<n;j++)
    {
        printf("Name:");
        gets(s[j].name);
       getchar();
        printf("Income:");
        scanf("%f",&s[j].income);

       printf("Cost:");
        scanf("%f",&s[j].cost);
        //printf("Profit:");
       // scanf("%d",&s[j].cost);
        //getchar();
    }
  for(j=0;j<n;j++)
       // for(i=0;i<n;i++)
           s[j].profit=s[j].income-s[j].cost;
            //sum[j]+=s[j].term_marks[i];

    //for(j=0;j<3;j++)
        //s[j].avg=sum[j]/3;

    for(j=0;j<n;j++)
        printf("Company %s, Income:%f, Cost %f Profit %f \n",s[j].name,s[j].income,s[j].cost,s[j].profit);

    return 0;
}

