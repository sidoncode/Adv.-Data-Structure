#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    int data;
    struct node* next;
};

struct node* start = NULL;

void del_given_position(struct node*,int pos){
    int i;
    struct node* temp;
    if(pos == NULL){
        printf("The deletion is not possible\n");
    }
    for(i=0;temp->next != NULL && i<=pos-1;i++){
        temp = temp->next;
    }
    struct node* next = temp->next->next; //forward the node
    
    free(temp->next); //del the node
    temp->next = next; //break the link

}