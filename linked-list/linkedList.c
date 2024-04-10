/* Name: linkedList.c
 * Purpose: Implementation of a linked list
 * Author: Candice Miller
 */

//TODO this program is incomplete this was a first pass at the basic logic behind creating nodes

#include <stddef.h>
#include <stdlib.h>

#define Node struct Node // Save us some repetetive code

int main(void)
{
    Node {
        int data; // This is specifically a linked list of ints - change data's type as needed
        Node* link; // Pointer points to the next node
    };

    Node* A; // Create a pointer that points to the head node
    A = NULL;

    Node* temp = malloc(sizeof(Node)); // Allocate space for a node

    // Assign arbitrary values for a node. This node doesn't point anywhere
    temp->data = 2;
    temp->link = NULL;

    A = temp; // write address of temp (first node) to A

    temp = malloc(sizeof(Node)); // create a new node somewhere and get pointer

    // Add data
    temp->data = 4;
    temp->link = NULL;

    // Link back to A (or more generally, previous node)
    Node* temp1 = A; // start at beginning pointer (don't overwrite head node pointer)
    while (temp1->link != NULL) // Last link is always null
    {
        temp1=temp1->link;
    }

    temp1->link = temp; // Finally point from our last attached node to our new node

    temp = malloc(sizeof(Node));

    temp->data = 6;
    temp->link = NULL;

    // Same code block as before to append to end
    temp1 = A;
    while (temp1->link != NULL)
    {
        temp1=temp1->link;
    }

    temp1->link = temp;

    return 0;
}