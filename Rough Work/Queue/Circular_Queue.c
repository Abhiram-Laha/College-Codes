#include<stdio.h>

typedef struct queue{
    int front;
    int rear;
    int arr[20];
}queue;

queue q;
int size=20;

int isFull(){
    return (q.front==(q.rear+1)%size);
}

int isEmpty(){
    return (q.front==-1 && q.rear==-1);
}


//? ENQUEUE

void Enqueue(int data){
    if(isFull()){
        printf("Queue Overflow.");
    }
    else if(isEmpty()){
        q.front=0;
        q.rear=0;
    }
    else{
        q.rear=(q.rear+1)%size;
    }

    q.arr[q.rear]=data;
}


//? DEQUEUE

int Dequeue(){
    int v=q.arr[q.front];

    if(isEmpty()){
        printf("\nUnderFlow");
    }
    else if(q.front==q.rear){
        q.front=-1;
        q.rear=-1;
    }
    else{
        q.front=(q.front+1)%size;
    }

    return v;
}

//? DISPLAY

void display(){
    if(isEmpty()){
        printf("Empty");
    }
    else{
        printf("\nQueue : ");

        int x=q.front;
        for(int i=1; i<=size; i++){
            printf("%d ",q.arr[x]);

            x=(x+1)%size;

        }
    }
}

int main(){
    q.front=-1;
    q.rear=-1;
    size=5;

    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);



    display();
    return 0;
}
