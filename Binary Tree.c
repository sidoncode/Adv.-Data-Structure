#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* create(){
    struct node* t;
    int x;
    t =( int*)malloc(sizeof(struct node));
    printf("Enter the data for the insertion\n");
    scanf("%d",&x);
    t->data = x;
    printf("Enter the left child of %d",x);
    t->left = create();
    printf("Enter the data for the right child of %d",x);
    t->right = create();
}


int main(){
    struct node* root;
    root = 0;

getch();
return 0;
}