#include<stdio.h>
void printline(char ch, int len);	/*Function prototype*/
float value(int n,float p,float r);
int main()
 {
	int period;
	float inrate, principal,amount;
	printf("Principal amount, interest rate and period?");
	scanf("%f %f %d",&principal,&inrate,&period);
	printline('-',52);
	amount = value(period,principal,inrate);
	printf("%f",amount);
	printline('.',100);
    return 0;
 }
void printline(char ch, int len)
{
	int x;
	printf("\n");
	for(x=1;x<=len; x++) printf("%c",ch);
	printf("\n");
 }
float value(int n,float p,float r)
 {
	int year;
	float sum;
	sum = p;
	year = 1;
	while(year<=n)
	{
		sum =  sum * (1+r);
		year++;
	}

	 return sum;
}
