#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node *root;

void in_order(struct node* root){
    if(root == 0)
        printf("The tree is empty\n");
    in_order(root->left);
    printf("%d",root->data);
    in_order(root->right);
}

void post_order(struct node* root){
    if(root == 0)
        printf("The tree is empty\n");
    post_order(root->left);
    post_order(root->right);
    printf("%d",root->data);
}

void pre_order(struct node* root){
    if(root == 0)
        printf("The tree is empty\n");
    printf("%d",root->data);
    pre_order(root->left);
    pre_order(root->right);
}

int main(){
    gethch();
    return 0;
}