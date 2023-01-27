#include<stdio.h>
#define SIZE 10

typedef struct Queue{
    int front;
    int rear;
    int Q[SIZE];
}Queue;

Queue q1;

int isEmpty(){
    return (q1.front==-1 && q1.rear==-1);
}

int isFull(){
    return (q1.front==(q1.rear+1)%SIZE);
}

void Enqueue(int n){
    if(isFull()){
        printf("Queue is Full.");
    }
    else{
        if(isEmpty()){
            q1.front=0;
            q1.rear=0;
        }
        else{
            q1.rear=(q1.rear+1)%SIZE;
        }
        q1.Q[q1.rear]=n;

    }
}


int Dequeue(){
    if(isEmpty()){
        printf("Empty Queue.");
    }
    else{
        int v=q1.Q[q1.front+1];
        
        if(q1.front==q1.rear){      //sinle element
            q1.front==-1;
            q1.rear==-1;
        }
        else{
            q1.front=(q1.front+1)%SIZE;
        }

        return v;
    }
}

void Display(){
    printf("Queue : ");
    if(isEmpty()){
        printf("Empty Queue.");
    }
    else{
        for(int i=q1.front+1; i<=q1.rear; i++){
            printf("%d ",q1.Q[i]);
        }
    }
}

int main(){

    Enqueue(5);
    Enqueue(10);
    Enqueue(6);
    Enqueue(17);

    
    Display();


    return 0;
}

