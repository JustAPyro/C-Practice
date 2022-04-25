#include <stdio.h>
// https://www.learn-c.org/en/Static

// Method declarations
int sum(int num);

// Entry
int main() 
{
    // As provided by reqs
    printf("%d ",sum(55));
    printf("%d ",sum(45));
    printf("%d ",sum(50));
    return 0;
}

// Sum numbers provided
int sum(int num) 
{
    static int sum; // Static so it doesn't disappear (file-wide scope)
    sum += num; // Add
    return sum; // Then return
}
