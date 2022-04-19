#include <stdio.h>
#include <string.h>
// https://www.learn-c.org/en/Strings

int main()
{
    // Define first/last using the two notations we learned, per reqs
    char * first_name = "John";
    char last_name[] = "Doe";
    char name[100];
    
    // Set the last name to B
    last_name[0] = 'B';
    
    sprintf(name, "%s %s", first_name, last_name);
    
    // If name is John Boe (and it should be)
    if (strncmp(name, "John Boe", 100) == 0) 
    {   // Print this!
        printf("Done!\n");
    }
    
    // Copy first/last over into name then print and return
    name[0]='\0';
    strncat(name, first_name, 4);
    strncat(name, last_name, 20);
    printf("%s\n", name);
    return 0;
    
}
