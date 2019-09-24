#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct queue{
    int size;
    int front,rear;
    int *Q;
};
void init_queue(struct queue *q,int size){
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (int *)malloc(q->size* sizeof(int));
}
void enqueue(struct queue *q,int data){
    if(q->rear == q->size - 1)
        printf("The queue is full\n");
    else{
        q->rear = q->rear + 1;
        q->Q[q->rear] = data;
    }
}
int dequeue(struct queue *q){
    int del_element;
    if(q->front == q->rear)
        printf("The queue is empty\n");
    else{
        q->front = q->front + 1;
        del_element = q->Q[q->front];
    }
return del_element;
}
void display(struct queue *q){
    int i;
    for(i=q->front+1;i<=q->rear;i++){
        printf("%d ",q->Q[i]);
    }
}
int main(){
    struct queue q;
    init_queue(&q,10);
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    display(&q);
    printf("\n");
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    display(&q);
getch();
return 0;
}