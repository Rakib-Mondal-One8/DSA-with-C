#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void Traversal(struct node* start){
    while(start != NULL){
        printf("%d ",start->data);
        start = start->next;
    }
    printf("\n");
}
int main ()
{
    struct node* head = (struct node *)malloc(sizeof(struct node));
    struct node* second = (struct node *)malloc(sizeof(struct node));
    struct node* third = (struct node *)malloc(sizeof(struct node));
    struct node* fourth = (struct node *)malloc(sizeof(struct node));

    // initializing head node
    head->data = 7;
    head->next = second;
    // initializing second node
    second->data = 11;
    second->next = third;
    // initializing third node
    third->data = 77;
    third->next = fourth;
    // initializing fourth node
    fourth->data = 69;
    fourth->next = NULL;
    
    Traversal(head);

    return 0;
}