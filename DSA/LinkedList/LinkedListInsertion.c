#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTravesal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// CASE 1
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

// CASE 2
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data;
    return head;
}

// CASE 3
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->data = data;
    ptr->next = NULL;
    return head;
}

// CASE 4
struct Node * insertAfterNode(struct Node * head, struct Node * previos, int data)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = previos->next;
    previos->next = ptr;

    return head;
}

int main()
{
    // Create node pointers
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in linded list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second node
    head->data = 7;
    head->next = second;

    // Link second and third node
    second->data = 9;
    second->next = third;

    // Link third and fourth node
    third->data = 11;
    third->next = fourth;

    // End linked list by NULL
    fourth->data = 13;
    fourth->next = NULL;
    
    printf("Original list: ");
    LinkedListTravesal(head);
    
    printf("After Inserting 5 at starting: ");
    head = insertAtFirst(head, 5);
    LinkedListTravesal(head);

    printf("After inserting 67 at index 1: ");
    head = insertAtIndex(head, 67, 1);
    LinkedListTravesal(head);

    printf("After inserting 99 at last: ");
    head = insertAtEnd(head, 99);
    LinkedListTravesal(head);

    printf("After inserting 4 after node named second having value 9: ");
    head = insertAfterNode(head,second,4);
    LinkedListTravesal(head);

    return 0;
}