#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node{
    int data;
    struct Node* link;
};
struct Node *first =NULL;


int count =0;


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
    else{
        struct Node* p;
        p = first;
        while (p != NULL){
            p = p->link;
        }
        p->link = t;
        p->data = x;
        t->link = NULL;
    }
}
void traverse(){
    struct Node* p;
    p = first;
    if(p == NULL){
        printf("The linkedlist is empty\n");
    }
    else{
        while (p != NULL){
            printf("The datas are %d",p->data);
            p = p->link;
        }
    }
}
void delete_from_begin() {
   struct node *t;
   int n;
   if (first == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }
   
   n = first->data;
   t = first->link;
   free(first);
   first = t;
   count--;
   printf("%d deleted from beginning successfully.\n", n);
}
void delete_from_end() {
   struct Node *t, *u;
   int n; 
   if (first == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }
   count--;
   if (first->link == NULL) {
      n = first->data;
      free(first);
      first = NULL;
      printf("%d deleted from end successfully.\n", n);
      return;
   }
   t = first;
   while (t->link != NULL) {
      u = t;
      t = t->link;
   }
   n = t->data;
   u->link = NULL;
   free(t);
   printf("%d deleted from end successfully.\n", n);
}
int main(){


return 0;
getch(); 
}