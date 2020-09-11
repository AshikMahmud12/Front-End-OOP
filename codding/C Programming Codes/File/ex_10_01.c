/**
 * C program to input numbers from file and write even,
 * odd and prime numbers to separate file.
 */

#include <stdio.h>
#include <stdlib.h>


/* Function declarations */
int isEven(const int NUM);



int main()
{
    /* File pointer to hold reference to different files */
    FILE * fPtrIn,
         * fPtrEven,
         * fPtrOdd,
         * fPtrPrime;


    int num, success;

    /*
     * Open all files to perform read/write.
     */
    fPtrIn   = fopen("data_numbers.txt", "r");
    fPtrEven = fopen("data_even-numbers.txt" , "w");
    fPtrOdd  = fopen("data_odd-numbers.txt"  , "w");



    /* fopen() return NULL if unable to open file in given mode. */
    if(fPtrIn == NULL || fPtrEven == NULL || fPtrOdd == NULL )
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(EXIT_FAILURE);
    }


    /* File open success message */
    printf("File opened successfully. Reading integers from file. \n\n");


    do
    {
        // Read an integer and store read status in success.
        success = fscanf(fPtrIn, "%d", &num);

        /*
         * Write prime, even and odd numbers to different files.
         */

         if (isEven(num))
            fprintf(fPtrEven, "%d\n", num);
        else
            fprintf(fPtrOdd, "%d\n", num);

    } while(success != -1);


    /* Done with all files, hence close all. */
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

