#include<stdio.h>

typedef struct queue{
    int front;
    int rear;
    int arr[20];
}queue;

queue q;


void Enqueue(int size,int data){
    if(q.rear==size-1){
        printf("Full Queue");
    }
    else{
        if(q.front==-1 && q.rear==-1){
            q.front++;
            q.rear++;
        }
        else{
            q.rear=(q.rear+1)%size;
        }

        q.arr[q.rear]=data;
    }
}

void display(int size){
    int x=q.front;
    for(int i=0; i<size; i++){
        printf("%d ",q.arr[x]);
        x=(x+1)%size;
    }
}

int main(){
    q.front=-1;
    q.rear=-1;

    Enqueue(3,1);
    Enqueue(3,2);
    Enqueue(3,3);

    display(3);
}