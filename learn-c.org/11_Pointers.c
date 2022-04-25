#include <stdio.h>
// https://www.learn-c.org/en/Pointers

int main()
{
    // n as provided by reqs
    int n = 10;
    
    // Create a pointer to the location of n
    int *pointer_to_n = &n;
    
    // Increment n using the pointer
    *pointer_to_n += 1;
    
    // Testing code
    if (pointer_to_n != &n) return 1;
    if (*pointer_to_n != 11) return 1;
    
    printf("Done!\n");
    return 0; // Else return true
}
