# include <stdio.h>
// https://www.learn-c.org/en/Variables_and_Types

// Main entry point
int main()
{
    // Per assignment declare three variables
    int a = 3;
    float b = 4.5;
    double c = 5.25;
    float output;
    
    // Assign the sum to output
    output = a + b + c;
    
    // Print the output and return 0
    printf("The sum of a, b, and c is: %f", output);
    return 0;
}
