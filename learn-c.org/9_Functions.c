#include <stdio.h>
// https://www.learn-c.org/en/Functions

// Declare functions (Will be defined later)
void print_big(int number);

int main() 
{
    // Array as provided
    int array[] = { 1, 11, 2, 22, 3, 33 };
    
    // Loop through and call method on each
    int i;
    for (i = 0; i < 6; i++)
    {   // Should only print numbers > 10
        print_big(array[i]);
    }
    
    // return success
    return 0;
}

// Defining our method
void print_big(int number)
{
    if (number > 10)
    {   // If the number is greater then 10 print it
        printf("%d is big\n", number);
    }
}
