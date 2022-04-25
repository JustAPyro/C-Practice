#include <stdio.h>
// https://www.learn-c.org/en/Structures

// Define a type structure
typedef struct 
{
    char * name; // With a name
    int age;     // And an age
}
person; // As type person

int main()
{
    person john; // Creating a new structure
    
    /* Testing code (per reqs) */
    john.name = "John";
    john.age = 27;
    printf("%s is %d years old.", john.name, john.age);
}
