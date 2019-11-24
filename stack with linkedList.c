#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct stack{
    int data;
    struct stack  *link;
};
struct stack *top = NULL;

void push(){
    struct stack *t;
    t = (struct stack*)malloc(sizeof(struct stack));
    printf("Enter data");
    scanf("%d",&t->data);
    t->link = top;
    top = t;
}

void pop(){
    struct stack *t;
    if(top == NULL){
        printf("No element\n");
    }
    else{
        /* code */
        t = top;
        top  = top ->link;
        t->link = NULL;
        free(t);
    }
    
}
void display(){
    while (top != NULL){
       printf("%d",top->data);
       top = top->link;
    }
}

int main(){
    /*push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);*/
    push();
    push();
    display();
    pop();

getch();
return 0; 
}