#include <stdio.h>
#include <stdlib.h>
// https://www.learn-c.org/en/Arrays_and_Pointers

int main()
{
    int i, j; // Size of array
    
    // Declare a pointer to int[][] array
    int **pnumbers = (int **) malloc(3 * sizeof(int *));
    
    // Allocate memory for storing the individual elements of each row
    pnumbers[0] = (int *) malloc(1 * sizeof(int));
    pnumbers[1] = (int *) malloc(2 * sizeof(int));
    pnumbers[2] = (int *) malloc(3 * sizeof(int));
    
    // As per the provided reqs
    pnumbers[0][0] = 1;
    pnumbers[1][0] = 1;
    pnumbers[1][1] = 1;
    pnumbers[2][0] = 1;
    pnumbers[2][1] = 2;
    pnumbers[2][2] = 1;
    
    // Print each int that was provided
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j <= i; j++) 
        {
            printf("%d", pnumbers[i][j]);
        }
        printf("\n");
    }

    // Free the memory for each row
    for (i = 0; i < 3; i++) 
    {
        free(pnumbers[i]);
    }
    
    // Free the top level pointers and return
    free(pnumbers);
    return 0;
    
}
