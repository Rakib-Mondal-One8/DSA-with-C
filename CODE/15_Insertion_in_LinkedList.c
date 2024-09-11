#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void Traversal(struct node *start)
{
    while (start != NULL)
    {
        printf("%d ", start->data);
        start = start->next;
    }
    printf("\n");
}
struct node *insert_at_head(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
void insert_at_index(struct node *head, int data, int index)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    struct node *tmp = head;
    int idx = 0;
    while (idx != index - 1)
    {
        tmp = tmp->next;
        idx++;
    }
    n->data = data;
    n->next = tmp->next;
    tmp->next = n;
}
void insert_at_end(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    ptr->data = data;
    tmp->next = ptr;
    ptr->next = NULL;
}
void insert_after_node(struct node *node, int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->next = node->next;
    node->next = n;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 77;
    third->next = fourth;
    fourth->data = 69;
    fourth->next = NULL;

    Traversal(head);
    head = insert_at_head(head, 18);
    Traversal(head);
    insert_at_index(head, 17, 1);
    Traversal(head);
    insert_at_end(head, 10);
    Traversal(head);
    insert_after_node(second,69);
    Traversal(head);
    return 0;
}