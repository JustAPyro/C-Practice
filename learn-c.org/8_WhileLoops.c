#include <stdio.h>
// https://www.learn-c.org/en/While_loops

int main()
{
    // As provided:
    int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int i = 0;
    
    while (i < 10) 
    {
        if (array[i] < 5)
        {   // Go back to the top of the loop
            i++;
            continue;
        }
        if (array[i] > 10)
        {   // End the loop
            break;
        }
        
        // Print the number in format provided
        printf("%d\n", array[i]);
        i++;
        
    }
    
    // Return success
    return 0;
}
