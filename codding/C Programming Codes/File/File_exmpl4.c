#include <stdio.h>
#include <stdlib.h> // For exit() function
int main()
{

   int i = 12;
    float x = 2.356;
    char ch = 's';
    FILE *fp;
fp=fopen("out.txt","w");
fprintf (fp, "%d %f %c", i, x, ch);

    fclose(fp);

    return 0;
}
