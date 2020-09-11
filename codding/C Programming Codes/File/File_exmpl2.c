#include <stdio.h>
int main()
{
  FILE *infile, *outfile;

  float num1,num2,total;
  infile=fopen("new.txt", "r");
  outfile=fopen("jil.txt", "w");
  fscanf(infile,"%f%f",&num1,&num2);
  total=num1+num2;
  printf("%f plus %f is %f\n",num1,num2,total);
  fprintf(outfile,"%f plus %f is %f\n",num1,num2,total);
  fclose(infile);
  fclose(outfile);
}
