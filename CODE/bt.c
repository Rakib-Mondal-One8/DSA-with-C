#include<stdio.h>
#include<stdlib.h>
const int MAX = 1e3;
struct node* queue[MAX] = {-1};
int top = -1;

struct node{
    int val;
    struct node* left;
    struct node* right;
};

void inorder(struct node* root){
    if(root->left == NULL && root->right == NULL){
        printf("%d ",root->val);
        return;
    }
    inorder(root->left);
    printf("%d ",root->val);
    inorder(root->right);
}

void preorder(struct node* root){
    if (root->left == NULL && root->right == NULL)
    {
        printf("%d ", root->val);
        return;
    }
    printf("%d ",root->val);
    preorder(root->left);
    preorder(root->right);
}
struct node* create(int n){
    struct node* root = (struct node*)malloc(sizeof(struct node));
    int val;
    scanf("%d",&val);
    root->val = val;
    root->left = NULL;
    root->right = NULL;
    for(int i=0;i<n-1;i++){
        int left = -1,right = -1;
        scanf("%d",&left);
    }
}
void postorder(struct node* root){
    if (root->left == NULL && root->right == NULL)
    {
        printf("%d ", root->val);
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->val);
}
int main(){
    
    struct node* root = (struct node*)malloc(sizeof(struct node));
    root->val = 1;
    struct node *lft = (struct node *)malloc(sizeof(struct node));
    lft->val = 2;
    lft->left = NULL;
    lft->right = NULL;
    struct node *rgt = (struct node *)malloc(sizeof(struct node));
    rgt->val = 3;
    rgt->left = NULL;
    rgt->right = NULL;


    root->left = lft;
    root->right = rgt;

    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    
    return 0;
}