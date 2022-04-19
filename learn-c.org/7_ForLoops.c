#include <stdio.h>
// https://www.learn-c.org/en/For_loops

int main() 
{
    // Array of increasing numbers
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int factorial = 1;
    
    // For loop to multiply them
    int i;
    for (i = 0; i < 10; i++) 
    {
        factorial *= array[i];
    }
    
    // Print the output and return success
    printf("10! is %d.\n", factorial);
    return 0;
    
}


/*
#include <stdio.h>

int main() {
  int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int factorial = 1;
  int i;

  /* calculate the factorial using a for loop  here

  printf("10! is %d.\n", factorial);
}
*/
