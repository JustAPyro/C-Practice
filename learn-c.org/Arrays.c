# include <stdio.h>
// https://www.learn-c.org/en/Arrays

// Entry
int main() 
{
    // Use the grades provided
    int grades[3];
    grades[0] = 85;
    grades[1] = 80;
    grades[2] = 90;
    
    // Average them and print the result
    int average = (grades[0]+grades[1]+grades[2])/3;
    printf("The average of all the grades is %d", average);
    
    // Return success
    return 0;
    
}
