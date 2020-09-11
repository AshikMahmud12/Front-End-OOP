#include<stdio.h>
#define M 50

struct company {
   char name[50];

   float income,cost;
} st[M]; /* array of structure */

int main() {

 struct company c[20];
 float
   printf("Enter how many companies:");
   scanf("%d", &n);

   for (j = 0; j < n; j++) {
      printf("\nEnter state %d details :", i);

      printf("\nEnter  name : ");
      scanf("%s", &st[i].name);

      printf("\nEnter income : ");
      scanf("%ld", &st[i].population);

      printf("\nEnter total literary rate : ");
      scanf("%f", &rate);
      st[i].literacyRate = rate;

      printf("\nEnter total income : ");
      scanf("%f", &st[i].income);
   }

   for (i = 0; i < n; i++) {
      if (st[i].literacyRate >= maximumLiteracyRate) {
         maximumLiteracyRate = st[i].literacyRate;
         ml++;
      }
      if (st[i].income > maximumIncome) {
         maximumIncome = st[i].income;
         mi++;
      }
   }

   printf("\nState with highest literary rate :%s", st[ml].name);
   printf("\nState with highest income :%s", st[mi].name);

   return (0);
}
