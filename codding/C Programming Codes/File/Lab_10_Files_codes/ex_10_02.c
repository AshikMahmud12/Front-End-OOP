#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
  int i = 0, sum = 0, n = 0,avg = 0;
  FILE *fin;
  fin = fopen("data.txt", "r");
  while(fscanf(fin, "%d", &n) != EOF){
      sum += n;
       i++;

      avg = (sum / i);
  }


  printf("The average is %d.\n", avg);

  fclose(fin);
  return 0;
}

