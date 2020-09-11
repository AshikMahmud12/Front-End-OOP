#include<stdio.h>
void printline();	/*Function prototype*/
void value();
int main()
 {
	printline();
	value();
	printline();
	return 0;
 }
void printline()
{
	int x;
	printf("\n");
	for(x=1;x<=50; x++)
        printf("-");
	printf("\n");
 }
void value()
{
    int year,period;
	float inrate, sum, principal;
	printf("Principal amount?");
	scanf("%f",&principal);
	printf("Interest rate?");
	scanf("%f",&inrate);
	printf("Period?");
	scanf("%d",&period);
	sum = principal;
	year = 1;
	while(year<=period)
	{
		sum =  sum * (1+inrate);
		year++;
	}
	printf("\n%f",sum);
}
