#include<stdio.h>
#include<stdlib.h>
struct Stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(int top){
    if(top==-1)return 1;
    else return 0;
}
int isFull(int top,int capacity){
    if(top>=capacity)return 1;
    else return 0;
}
void push(struct Stack *s,int val,int top,int capacity){
    if(isFull(top,capacity)==1){
        printf("Stack overflow , no space left in the stack\n");
        return;
    }
    int idx = top+1;
    s->arr[idx] = val;
    s->top+=1;
}
void pop(struct Stack *s,int top){
    if(isEmpty(top)==1){
        printf("Stack is empty , you can't pop any element\n");
    }
    s->arr[top] = 0;
    s->top-=1;
}
void display(struct Stack *s,int top){
    for(int i=0;i<=top;i++){
        printf("%d ",s->arr[i]);
    }
    printf("\n");
}
int main(){
    struct Stack *s;
    s->size = 10;
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        push(s,x,s->top,s->size);
    }
    display(s,s->top);
    push(s,15,s->top,s->size);
    int m;
    scanf("%d",&m);
    for(int i=1;i<=m;i++)pop(s,s->top);
    display(s,s->top);
    return 0;
}