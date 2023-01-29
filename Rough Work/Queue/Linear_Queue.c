#include<stdio.h>

typedef struct queue{
    int front;
    int rear;
    int arr[20];
}queue;

queue q;
int size=20;

int isEmpty(){
    if(q.front==-1 && q.rear==-1){
        return 1;
    }
    else{
        return 0;
    }
}


int isFull(){
    return (q.rear==size-1);
}

//! ENQUEUE

void Enqueue(int data){
    if(isFull()){
        printf("\nQueue Overflow.");
    }
    else if(isEmpty()){
        q.front++;
        q.rear++;
    }
    else{
        q.rear++;
    }

    q.arr[q.rear]=data;
}


//! DEQUEUE

int Dequeue(){
    int v=q.arr[q.front];
    if(isEmpty()){
        printf("\nEmpty Queue");
    }
    else if(q.front==q.rear){
        q.front=-1;
        q.rear=-1;
    }

    else{
        q.front++;
    }

    return v;
}


//! DISPLAY

void display(){
    printf("\nQueue : ");
    for(int i=q.front; i<=q.rear; i++){
        printf("%d ",q.arr[i]);
    }
}


int main(){

    size=5;
    q.rear=-1;
    q.front=-1;

    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    //Dequeue();
    Enqueue(4);
    Enqueue(5);

    printf("%d",Dequeue());

    display();

    return 0;
}
