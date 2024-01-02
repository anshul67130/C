#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void LinkedListTravesal(struct Node * ptr)
{
    while( ptr != NULL)
    {
        printf("%d  ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main()
{
    // Create node pointers 
    struct Node * head ;
    struct Node * second ;
    struct Node * third ;
    struct Node * fourth ;
   
    // Allocate memory for nodes in linded list in heap
    head = (struct Node *) malloc(sizeof(struct Node)); 
    second = (struct Node *) malloc(sizeof(struct Node)); 
    third = (struct Node *) malloc(sizeof(struct Node)); 
    fourth = (struct Node *) malloc(sizeof(struct Node));
    
    // Link first and second node
    head->data = 7;
    head->next = second;

    // Link second and third node
    second->data = 9;
    second->next = third;

    // Link third and fourth node
    third->data = 11;
    third->next = fourth;

    //End linked list by NULL
    fourth->data = 13;
    fourth->next = NULL;

    LinkedListTravesal(head); 
    



    return 0;
}