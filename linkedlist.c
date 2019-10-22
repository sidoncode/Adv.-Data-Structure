#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node{
    int data;
    struct Node* link;
};
struct Node *first =NULL;

void insert_at_begin(){
    struct Node *t; int x;
    printf("Enter The data \n");
    scanf("%d",&x);
    t = (struct Node*)malloc(sizeof(struct Node));
    if(first == NULL){
        first = t;
        first->data = x;
        first->link = NULL;
    }
    else{
        t->data = x;
        t->link = first;
        first = t;
    }
}

void insert_at_end(){
    struct Node* t;
    int x;
    printf("Enter the data\n");
    scanf("%d",&x);
    t = (struct Node*)malloc(sizeof(struct Node));
    if(first == NULL){
        first = t;
        first->data = x;
        first->link = NULL;
    }

}






int main(){


return 0;
getch(); 
}