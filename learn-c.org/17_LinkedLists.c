#include <stdio.h>
#include <stdlib.h>
// https://www.learn-c.org/en/Linked_lists

/*
* Note: This one is a little more complicated and has more provided materials then other ones, 
* so all code you see here IS provided by learn-c.org (per reqs) except for my implementation 
* of the remove_by_value() function starting on line 41.
*/

typedef struct node {
    int val;
    struct node * next;
} node_t;

void print_list(node_t * head) {
    node_t * current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

int pop(node_t ** head) {
    int retval = -1;
    node_t * next_node = NULL;

    if (*head == NULL) {
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return retval;
}

/* MY CODE HERE: */
int remove_by_value(node_t ** head, int val) 
{
    if ((*head)->val == val) 
    {   // If target is first element, use provided pop()
        pop(head);
    }
    
    node_t * current = *head; // Otherwise get a working node
    while (current->next != NULL && current->next->val != val)
    {   // Iterate either to target node or to the end
        current = current->next;
    }
    
    // If we're at the end return -1
    if (current->next == NULL)
    {   // If we're at the end return -1
        return -1;
    }
    
    // If the next value is the target
    if (current->next->val == val)
    {
        // Get a pointer for the node to delete
        node_t * deleteNode = NULL; 
        deleteNode = current->next;
        
        // If it has a node after it, relink the list
        if (deleteNode->next != NULL)
        {
            current->next = deleteNode->next;
        }
        else
        {   // Otherwise set the node after this to null 
            current->next = NULL;
        }
        
        // Then free the memory and return success
        free(deleteNode);
        return 0;
        
    }
    
    // If we get here, something's gone wrong so abort
    return -1;
    
}

int main() {

    node_t * test_list = (node_t *) malloc(sizeof(node_t));
    test_list->val = 1;
    test_list->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->val = 2;
    test_list->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->val = 3;
    test_list->next->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->next->val = 4;
    test_list->next->next->next->next = NULL;

    remove_by_value(&test_list, 3);

    print_list(test_list);
}
