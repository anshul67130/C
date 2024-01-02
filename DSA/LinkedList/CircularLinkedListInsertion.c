#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insertAsHead(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = data;
    ptr->next = head;
    do
    {
        p = p->next;
    } while (p->next != head);
    p->next = ptr;
    return ptr;
}

int circularTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");
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

    second->data = 4;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = head;

    printf("Original circular linked list: ");
    circularTraversal(head);

    printf("List after inserting 1 at starting: ");
    head = insertAsHead(head, 1);
    circularTraversal(head);

    return 0;
}