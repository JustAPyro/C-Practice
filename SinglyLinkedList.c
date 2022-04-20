#include <stdio.h>
#include <stdlib.h>


// Structure of a node
typedef struct node 
{
    int value; // The value of a node
    struct node * next; // Pointer to next node
} node_t;

// method declarations
void print_list(node_t * head);
void addLast(node_t * head, int value);
void addFirst(node_t ** head, int value);
int removeFirst(node_t ** head);
int removeLast(node_t * head);
int removeIndex(node_t ** head, int n);
int removeValue(node_t ** head, int val);


int main()
{
    node_t * head = NULL;
    head = (node_t *) malloc(sizeof(node_t));
    if (head == NULL)
    {
        return 1;
    }
    
    addLast(head, 1);
    addLast(head, 2);
    addLast(head, 3);
    addLast(head, 4);
    addLast(head, 5);
    print_list(head);
}

int removeValue(node_t ** head, int n)
{
    
    // If the head is the value we want to remove, just use our previous method
    if ((*head)->value == n)
    {   
        removeFirst(head);
        return 0;
    }
    
    // Otherwise, iterate through the list, checking for it
    node_t * current = *head;
    while (current->next->next != NULL)
    {
        if (current->next->value==n)
        {
            // Assign the node to remove to temp
            node_t * temp = current->next;
            
            // Assign the current node to the one after the deleted
            current->next = temp->next;
            
            // Free the memory and return
            free(temp);
            return 0;
            
        }
        
        // Move to the next node
        current = current->next;
    }
    
    // If the last value is the target
    if (current->next->value == n)
    {
        // Just call our removelast
        removeLast(*head);
        return 0;
    }
    
    // Otherwise, we haven't found it- return error
    return -1;
}

int removeIndex(node_t ** head, int n)
{
    int i = 0;  // Index we're on
    int returnValue = -1;   // Value to return
    node_t * current = *head; // The current node
    
    if (n == 0)
    {   // If we're returning the first just use that method
        return removeFirst(head);
    }
    
    // Otherwise iterate through to find the correct index
    for (i = 0; i < n-1; i++)
    {   // Check to make sure we're not going out of bounds
        if (current->next == NULL)
        {
            return -1;
        }
        current = current->next;
    }
    
    // Make sure we're not at the end of the list
    if (current->next == NULL)
    {
        return -1;
    }
    
    // Save the node to remove
    node_t * temp = current->next;
    
    // Get the value and reassign this node to the next of that node
    returnValue = temp->value;
    current->next = temp->next;
    
    // Free it
    free(temp);
    
    // Finally return
    return returnValue;
    
}

int removeLast(node_t * head)
{
    // Start with a return value variable
    int returnValue = 0;
    
    // If there's only one item in the list, remove it
    if (head->next == NULL) 
    {
        returnValue = head->value;  // Get the value
        free(head); // Free the space
        return returnValue;    // Return the value
    }
    
    // otherwise, get the 2nd to last node
    node_t * current = head;
    while (current->next->next != NULL)
    {   // Iterate until while condition is true
        current = current->next;
    }
    
    // Collect the value, free the memory, and return
    returnValue = current->next->value;
    free(current->next);
    current->next = NULL;
    return returnValue;
    
}

int removeFirst(node_t ** head)
{
    
    // If this doesn't get overwritten something went wrong
    int return_value = -1;
    
    // Save the next node (new head)
    node_t * new_head = NULL;
    
    if (*head == NULL) 
    {   // If we don't have a valid head return error
        return -1;
    }
    
    // Assign the new_head to the correct node
    new_head = (*head)->next;
    
    // Assign the return value
    return_value = (*head)->value;
    
    // Free the memory
    free(*head);
    
    // Assign the provided head to the new head
    *head = new_head;
    
    // Return the removed value
    return return_value;
    
}

void addFirst(node_t ** head, int value)
{
    
    // Allocate memory for a new node and assign values
    node_t * new_head = (node_t *) malloc(sizeof(node_t));
    
    if (new_head == NULL)
    {   // If we're out of memory return
        return;
    }
    
    // Assign the values now
    new_head->value = value;
    new_head->next= *head;
    
    // Reassign the head to the new object
    *head = new_head;
}

void addLast(node_t * head, int value)
{
    // Placeholder for current node
    node_t * current = head;
    
    // Find the last node
    while (current->next != NULL)
    {
        current = current->next;
    }
    
    // Once we've found the last node try to allocate memory
    current->next = (node_t *) malloc(sizeof(node_t));
    if (current->next == NULL)
    {   // If we're out of memory return
        return;
    }
    
    // Set the new end null and new value
    current->next->next = NULL;
    current->next->value = value;
    
    
    
}

void print_list(node_t * head)
{
    // Holds the pointer to the current node
    node_t * current_node = head;
    
    // While we haven't reached the end
    while (current_node != NULL)
    {
        // Print the current node
        printf("%d->", current_node->value);
        
        // Advance to the next node
        current_node = current_node->next;
    }
    
    // Print the last element which is null
    printf("NULL\n");
}

