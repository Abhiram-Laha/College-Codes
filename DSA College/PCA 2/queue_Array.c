#include<stdio.h>
#define size 20

typedef struct Queue{
    int front;
    int rear;
    int arr[size];
}Queue;

Queue q;

/*                                              LINEAR QUEUE
void Enqueue(int data){
    if(q.rear==size-1){
        printf("Overflow !! ");
    }
    else if(q.front==-1 && q.rear==-1){
        q.front=0;
        q.rear=0;
        q.arr[q.rear]=data;
    }
    else{
        q.rear++;
        q.arr[q.rear]=data;
    }
}

void Dequeue(){
    if(q.front==q.rear==-1){
        printf("Empty Queue");
    }
    else if(q.front==q.rear){
        q.front=-1;
        q.rear=-1;
    }
    else{
        q.front++;
    }
}


*/

//                                               CIRCULAR QUEUE


void Enqueue(int data){
    if((q.rear+1)%size==q.front){
        printf("Overflow.");
    }
    else if(q.front==-1 && q.rear==-1){
        q.front++;
        q.rear++;
    }
    else{
        q.rear=(q.rear+1)%size;
    }
    q.arr[q.rear]=data;
}

void Dequeue(){
    if(q.front==-1){
        printf("Underflow.");
    }
    else if(q.front==q.rear){
        q.front=q.rear=-1;
    }
    else if(q.front==size-1){
        q.front=0;
    }
    else{
        q.front++;
    }
}



void Display(){
    if(q.front==-1){
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
    q.front=q.rear=-1;
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);

    printf("Before Dequeue : ");
    Display();

   Dequeue();
   Dequeue();
   Dequeue();

   Enqueue(6);
   Enqueue(7);
   Enqueue(8);

   Dequeue();

   Enqueue(9);


    printf("\n\nAfter Dequeue : ");
    Display();




    return 0;
}