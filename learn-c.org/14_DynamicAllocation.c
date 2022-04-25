#include <stdio.h>
#include <stdlib.h>
// https://www.learn-c.org/en/Dynamic_allocation

// Struct as provided by reqs
typedef struct
{
    int x;
    int y;
}   point;

int main() 
{
    // Memory allocate a point
    point * mypoint = NULL;
    mypoint = (point*) malloc(sizeof(point));
    
    // Now you can change like so:
    mypoint->x = 10;
    mypoint->y = 5;
    printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

    // Free the memory and return success
    free(mypoint);
    return 0;
}
