#include<stdio.h>
#define SIZE 10

int F=-1,R=-1;
int Queue[SIZE];

int isFull(){
    if(R==SIZE-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(){
    if(R==-1 && F==-1){
        return 1;
    }
    else{
        return 0;
    }
}

void Enqueue(int item){
    if(isFull()){
        printf("Queue Full!!");
    }
    else{
        if(isEmpty()){
            F++;
            R++;
        }
        else{
            R++;
        }
        Queue[R]=item;
    }
}

int Dequeue(){
    if(isEmpty()){
        printf("Empty!!");
    }
    else{
        int x=Queue[F];
        if(F==R)
        {
            F=-1;
            R=-1;
        }
        else{
            F++;
        }
        return x;
    }
}

void Display(){
    printf("Queue : ");
    for(int i=F; i<=R; i++){
        printf("%d ",Queue[i]);
    }
}

int main(){

    Enqueue(5);
    Enqueue(10);
    Display();


    return 0;
}