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
struct node *delete_at_head(struct node *head)
{
    struct node *to_del = head;
    head = head->next;
    free(to_del);
    return head;
}
struct node *delete_at_index(struct node *head, int index)
{
    if (index == 1)
    {
        head = delete_at_head(head);
        return head;
    }
    index -= 2;
    struct node *p = head;
    while (index--)
        p = p->next;
    struct node *to_del = p->next;
    p->next = p->next->next;
    free(to_del);
    return head;
}
void delete_at_end(struct node *head)
{
    struct node *p = head;
    while (p->next->next != NULL)
        p = p->next;
    struct node *to_del = p->next;
    p->next = p->next->next;
    free(to_del);
}
void delete_after_node(struct node *head, int data)
{
    struct node *p = head;
    while (p != NULL && p->data != data)
        p = p->next;
    if (p == NULL)
    {
        printf("value not found\n");
        return;
    }
    struct node *to_del = p->next;
    p->next = p->next->next;
    free(to_del);
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 77;
    third->next = fourth;
    fourth->data = 69;
    fourth->next = fifth;
    fifth->data = 18;
    fifth->next = NULL;

    Traversal(head);
    head = delete_at_head(head);
    Traversal(head);
    head = delete_at_index(head, 3);
    Traversal(head);
    delete_at_end(head);
    Traversal(head);
    delete_after_node(head, 11);
    Traversal(head);
    return 0;
}