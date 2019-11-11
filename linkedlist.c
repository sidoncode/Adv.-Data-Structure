#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
   int data;
   struct node* next; 
};
struct node* head = NULL;

void insert_at_begin(int);
void insert_at_end();

void insert_at_begin(int x){
   struct node* nextnode;
   nextnode = (struct node*)malloc(sizeof(struct node));
   if(head == NULL){
      head = nextnode;
      nextnode->data = x;
      nextnode->next = NULL;
   }
   else{
      nextnode->data=x;
      nextnode->next = head;
      head = nextnode;
   }
}


void insert_at_end(int x){
   struct node* nextnode;
   nextnode = (struct node*)malloc(sizeof(struct node));
   nextnode->data = x;
}
void delete_at_begin(){
   struct node* t;
   if(head ==  NULL)
      printf("Empty\n");
   int n;
   n = head->data;
   t=head->next;
   free(head);
   head = t;
}

void delete_at_end(){
   struct node* temp;
   while(temp->next != NULL){
      temp= temp->next;
   }
   int del_data;
   del_data = temp->data;
   
   free(temp);
}


int main(){

   getch();
   return 0;
}