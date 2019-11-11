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
   nextnode = (struct node*)malloc(sizeof(struct node)); //global define is required for the execution of fx i.e called del_at_pos
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
   struct node* u;
   int del_element;
   
   //temp is used for the traversing
   
   if(head == NULL){ 
      printf("Empty\n");
   }
   
   if(head->next == NULL){
      del_element = head->data;
      free(head);
      head->next = NULL;
   }

   temp = head;

   while(temp->next != NULL){
      u = temp;
      temp = temp->next; 
   }

   del_element = temp->data;
   u->next = NULL;
   free(temp);
}

void traverse(){
   struct node* temp;
   while(temp->next != NULL){
      temp = temp->next;
   }
}

void insert_at_pos(int pos){
   int i;
   struct node* temp;
   for(i=0; temp != NULL; i<=pos-1;i++){
      temp = temp->next;
   }
   struct node *next = temp->next->next;
   free(temp);
   temp->next = next;
}



int main(){

   getch();
   return 0;
}