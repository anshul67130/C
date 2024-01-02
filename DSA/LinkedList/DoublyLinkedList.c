#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    struct Node *prev;
    int data;
    struct Node *next;
};

void display(struct Node *head)
{
    struct Node *ptr = head;
    printf("The doubly linked list is: \n");
    while (ptr->next != NULL)
    {
        printf("%d  ",ptr->data);
        ptr = ptr->next;
    }
    printf("%d  \n",ptr->data);
    
    printf("Now in reverse: \n");
    while (ptr->prev !=NULL)
    {
        printf("%d  ",ptr->data);
        ptr = ptr->prev;
    }
    printf("%d  \n",ptr->data);
    
}

int main()
{
    struct Node *head, *second, *third, *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 2;
    head->next = second;
    head->prev = NULL;

    second->data = 4;
    second->next = third;
    second->prev = head;

    third->data = 6;
    third->next = fourth;
    third->prev = second;

    fourth->data = 8;
    fourth->next = NULL;
    fourth->prev = third;

    display(head);

    return 0;
}