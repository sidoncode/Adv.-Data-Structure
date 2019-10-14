#include<stdio.h>
#include<conio.h>

#define MAX 5

int a[MAX];
int data;
int front = -1;
int rear = -1;

void display(){
    int i;
    if(front == -1)
        printf("Queue is empty\n");
    else{
        for(i = front;i<=rear;i++){
            printf("%d",a[i]);
        }
    }
}

void enqueue(){
    int add_item;
    if(rear == MAX -1){
        printf("The queue is Full\n");}
        else{
        if (front == - 1)
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        a[rear] = add_item;
    }
    
}

void dequeue(){
    if(front == -1 || front > rear){
        printf("Queue underflow\n");
    }
    else{
        front = front + 1;
        printf("The element is deleted\n");
        printf("The deleted element is %d", a[front]);
    }
}

int main(){
display();
enqueue(5);
enqueue(10);
enqueue(1);
enqueue(2);
display();
getch();
return 0;
}