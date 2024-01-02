#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void LinkedListTravesal(struct Node * ptr)
{
    while(ptr != NULL)
    {
        printf("%d  ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// CASE 1

struct Node * deleteFirst(struct Node * head)
{
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head; 
}

// CASE 2 

struct Node * deleteAtIndex(struct Node * head, int index)
{
    struct Node * p = head;
    struct Node * q = head->next; 
    int i = 0;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head; 
}

// CASE 3

struct Node * deleteAtEnd(struct Node * head)
{
    struct Node * p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

// CASE 4

struct Node * deleteAtValue(struct Node * head, int value)
{
    struct Node * p = head; 
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data  == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{

    struct Node * head = (struct Node * ) malloc(sizeof(struct Node));
    struct Node * second = (struct Node * ) malloc(sizeof(struct Node));
    struct Node * third = (struct Node * ) malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node * ) malloc(sizeof(struct Node));
    struct Node * fifth = (struct Node * ) malloc(sizeof(struct Node));
    struct Node * sixth = (struct Node * ) malloc(sizeof(struct Node));

    head->data = 2;
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = fifth;

    fifth->data = 10;
    fifth->next = sixth;

    sixth->data = 12;
    sixth->next = NULL;

    printf("The original list is: ");
    LinkedListTravesal(head);

    printf("List after deleting first Node: ");
    head = deleteFirst(head);
    LinkedListTravesal(head);
    
    printf("List after deletind element at index 2: ");
    head = deleteAtIndex(head,2);
    LinkedListTravesal(head);

    printf("After deleting the last element: ");
    head = deleteAtEnd(head);
    LinkedListTravesal(head);

    printf("After deleting 6 from list: ");
    head = deleteAtValue(head, 6);
    LinkedListTravesal(head);




    return 0;
}