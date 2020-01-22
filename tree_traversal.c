#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct B_tree{
    int data;
    struct B_tree *leftchild;
    struct B_tree *rightchild;
};

struct B_tree *root = NULL;


void insert(int data){
    struct B_tree* parent;
    struct B_tree* current_node;
    struct B_tree* temp;
    /**struct B_tree*
    struct B_tree**/
    temp = (struct B_tree*)malloc(sizeof(struct B_tree));
    temp ->data =data;
    temp->leftchild = NULL;
    temp->rightchild = NULL;
    if(root == NULL){
        root = temp;
    }
    else{
        current_node = root;
        parent = NULL;
        while(1){
            parent = current_node;
            //go to left of the tree
            if(data < parent->data){
                current_node = current_node->leftchild;
                if(current_node == NULL){
                    parent->leftchild = temp;
                    return;
                }
            }
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
    struct B_tree* current_node  = root;
    while (current_node->data != data){
        if(current_node != NULL){
            printf("%d",current_node->data);
        }
        if(current_node->data > data){
            current_node = current_node->leftchild;
        }
        if(current_node->data < data){
            current_node = current_node->rightchild;
        }
        if(current_node == NULL){
            return NULL;
        }
    }
    return current_node; // return the key for the search element
}
// types of traversal
void pre_order(struct B_tree* root){
    if(root != NULL){
        //root -> left -> right
        printf("%d",root->data);
        pre_order(root->leftchild);
        pre_order(root->rightchild);
    }
}

void in_order(struct B_tree* root){
    if(root != NULL){
        //left -> root -> right
        in_order(root->leftchild);
        printf("%d",root->data);
        in_order(root->rightchild);
    }
}

void post_order(struct B_tree* root){
    if(root != NULL){
        //root -> left -> right
        printf("%d",root->data);
        post_order(root->leftchild);
        post_order(root->rightchild);
    }
}



int main(){
    int a[10];
    int i;
    int key;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        insert(a[i]);
    }
    key = 10;
    struct B_tree* temp =search(key);
    if(temp != NULL){
        printf("the element is present\n");
    }else{
        printf("The element is not present");
    }
    printf("Following are the tree traversal\n\n");
    
    printf("Below is the tree traversal of IN ORDER\n");
    in_order(root);
    
    printf("Below is the tree traversal of POST ORDER\n");
    post_order(root);

    printf("Below is the tree traversal of PRE ORDER\n");
    pre_order(root);
    getch();
    return 0;
}