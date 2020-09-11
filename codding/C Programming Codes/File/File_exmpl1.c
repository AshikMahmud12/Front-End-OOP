#include<stdio.h>

int main()
{
	FILE *f;
	char c;
	f = fopen("input.txt","w");
	while( (c=getchar()) != EOF)
		putc(c,f);
	fclose(f);
	f=fopen("input.txt","r");
	while( (c=getc(f)) != EOF)
		printf("%c",c);
	fclose(f);
	return 0;
}

