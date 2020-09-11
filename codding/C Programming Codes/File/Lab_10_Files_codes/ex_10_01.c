#include <stdio.h>
#include <stdlib.h>
int isEven(const int NUM);
int main()
{
    FILE * fPtrIn,
         * fPtrEven,
         * fPtrOdd,
         * fPtrPrime;


    int num, success;

    fPtrIn   = fopen("data_numbers.txt", "r");
    fPtrEven = fopen("data_even-numbers.txt" , "w");
    fPtrOdd  = fopen("data_odd-numbers.txt"  , "w");

    if(fPtrIn == NULL || fPtrEven == NULL || fPtrOdd == NULL )
    {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }
    printf("File opened successfully. \n\n");

    do
    {
        success = fscanf(fPtrIn, "%d", &num);

         if (isEven(num))
            fprintf(fPtrEven, "%d\n", num);
        else
            fprintf(fPtrOdd, "%d\n", num);

    } while(success != -1);

    fclose(fPtrIn);
    fclose(fPtrEven);
    fclose(fPtrOdd);

    printf("Data written to files successfully.");
     return 0;
}

int isEven(const int NUM)
{
    return !(NUM & 1);
}

