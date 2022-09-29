#include<stdio.h>
#define SIZE 10

typedef struct Queue{
    int front;
    int rear;
    int arr[SIZE];
}Queue;

Queue q;

int isEmpty(){
    return (q.front==-1 && q.rear==-1);
}

int isFull(){
    return (q.rear==SIZE-1);
}

void Enqueue(int data){

    if(isFull()){
        printf("Queue is Full.");
    }
    else{
        if(isEmpty()){
            q.front=0,q.rear=0;
        }
        else{
            q.rear++;
        }
        q.arr[q.rear]=data;
        printf("\n%d Inserted.",data);
    }
    
}

void Dequeue(){
    if(isEmpty()){
        printf("Empty Queue.");
    }
    else{
        int x=q.arr[q.front];
        if(q.rear==q.front){
            q.rear=-1,q.front=-1;
        }
        else{
            q.front++;
        }
        printf("\n%d Deleted.",x);
    }
}

void Display(){
    if(isEmpty()){
        printf("Empty Queue.");
    }
    else{
        printf("\nQueue : ");
        for(int i=q.front; i<=q.rear; i++){
            printf("%d ",q.arr[i]);
        }
    }
}


int main(){
    q.front=-1,q.rear=-1;
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);

    Display();

    Dequeue();
    Dequeue();
  

    Display();

    Enqueue(6);
    Enqueue(7);

    Display();

    return 0;
}
