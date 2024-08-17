/*Cercular linked list*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal_circularll(struct node* head){
    struct node* tmp = head;
    do{
        printf("%d ",tmp->data);
        tmp = tmp->next;
    }while(tmp!=head);
    printf("\n");
}
struct node* insert_at_first(struct node*head ,int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    struct node* p = head->next;
    while(p->next!=head) p = p->next;
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}
int main(){

    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *sec = (struct node *)malloc(sizeof(struct node));
    struct node *trd = (struct node *)malloc(sizeof(struct node));
    struct node *frt = (struct node *)malloc(sizeof(struct node));
    head->data = 18;
    head->next = sec;
    sec->data = 7;
    sec->next = trd;
    trd->data = 88;
    trd->next = frt;
    frt->data = 81;
    frt->next = head;

    traversal_circularll(head);
    traversal_circularll(insert_at_first(head,100));
    return 0;
}
