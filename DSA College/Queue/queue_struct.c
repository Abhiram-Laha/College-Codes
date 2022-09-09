#include<stdio.h>
#include<stdlib.h>

# define SIZE 10

typedef struct Queue
{
    int front;
    int rear;
    int Queue[SIZE];
}Queue;

Queue q;

int isFull(){
    return (q.rear==SIZE-1);
}

int isEmpty(){
    return (q.front==-1 && q.rear==-1);
}


void Enqueue(int item){
    if(isFull()){
        printf("Queue Full !!");
    }
    else{
        if(isEmpty()){
            q.front=0;
            q.rear=0;
        }
        else{
            q.rear++;
        }
        q.Queue[q.rear]=item;
        
    }

}

int Dequeue(){
    if(isEmpty()){
        printf("Empty Queue !! ");
    }
    else{
        int x=q.Queue[q.front];
        if(q.front==q.rear){        // Single Element Removal
            q.front=-1;
            q.rear=-1;
        }
        else{
            q.front++;
        }
        return x;
    }
}


void Display(){
    if(isEmpty()){
        printf("Empty Queue !!");
        exit(0);
    }
    else{
        for(int i=q.front; i<=q.rear; i++){
        printf("%d ",q.Queue[i]);
        }
    }
}



int main(){

    int ch;
    q.front=-1;
    q.rear=-1;

    printf("\tQueue Operations\n");

    while(ch!=4){

        printf("\n\n\t1> Enqueue\n\t2> Dequeue\n\t3> Display\n\t4> Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                int v;
                printf("\nEnter Element to Insert : ");
                scanf("%d",&v);
                Enqueue(v);
                break;

            case 2:
                int x=Dequeue();
                printf("\n%d is Removed.",x);
                break;
            
            case 3:
                printf("\nQueue : ");
                Display();
                break;

            case 4:
                printf("Exiting.......");
                break;

            default:
                printf("\nInvalid Input!!\nEnter Again.....");
        }

    }

    return 0;
}

