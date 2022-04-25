#include <stdio.h>
// https://www.learn-c.org/en/Function_arguments_by_reference

// Struct provided per reqs
typedef struct
{
    char * name;
    int age;
} person;

/* Function declaration (per reqs) */
void birthday(person * p);

int main() 
{
    // As per reqs, again
    person john;
    john.name = "John";
    john.age = 27;
    printf("%s is %d years old.\n", john.name, john.age);
    
    birthday(&john);
    printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);

}

// Increments age
void birthday(person * p)
{   // Use shorthand to increase age of the struct
    p->age++;
}
