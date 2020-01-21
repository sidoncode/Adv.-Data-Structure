#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct B_tree{
    int data;
    struct B_tree *leftchild;
    struct B_tree *rightchild;
};

struct B_tree *root = NULL;


void insert(data){
    struct B_tree *current_node;
    struct B_tree *parent;
    struct B_tree *temp; //declaration of temp Node;
    temp = (struct B_tree*)malloc(sizeof(struct B_tree)); // init of the temp node
    
    temp->data = data;
    temp->leftchild  =NULL;
    temp->rightchild  = NULL;

    if(root == NULL){
        root = temp;
    }
    else{
        current_node = root;
        parent = NULL;
    
        while(1){
            parent = current_node;
            if(data < parent->data){
                current_node = current_node->leftchild;
                if(current_node == NULL){
                    parent ->leftchild = temp;
                    return;
                }
            }
            //go to right child
            else{
                current_node = current_node->rightchild;
                if(current_node == NULL){
                    parent->rightchild = temp;
                    return;
                }
            }
        }
    }    
}

struct B_tree* search(int data){
    
}

int main(){


    getch();
    return 0;
}