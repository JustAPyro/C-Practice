#include <stdio.h>
// https://www.learn-c.org/en/Recursion

// Method declarations
int factorial(int val);

// Main method as provided by reqs
int main() {
    /* testing code */
    printf("0! = %i\n", factorial(0));
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));
}

// Recursive Fact method
int factorial(int val) 
{
    // Base case, fact(0) = 1
    if (val == 0)
    {
        return 1;
    }
    
    // Else, return this times the factorial underneath it
    return val * factorial(val-1);
    
}

