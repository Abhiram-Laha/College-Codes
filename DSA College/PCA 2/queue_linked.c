#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

node *create(int data){
    node *new=malloc(sizeof(node));
    new->data=data;
    new->link=NULL;
}

void Enqueue(node **front,int data){
    node *new=create(data);

    if(*front==NULL){
        *front=new;    
    }
    else if((*front)->link==NULL){
        (*front)->link=new;
    }
    else{
        node *ptr=*front;
        while(ptr->link!=NULL){
            ptr=ptr->link;
        }
        ptr->link=new;
    }
}


void Dequeue(node **front){
    if(*front==NULL){
        printf("Empty Queue.");
    }
    else if((*front)->link==NULL){
        *front=NULL;
    }
    else{
        *front=(*front)->link;
    }
}


void display(node *front){
    if(front==NULL){
        printf("Empty Queue.");
    }
    else{
        printf("\nQueue : ");
        node *ptr=front;
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
    }


}

int main(){
    node *front;
    front=NULL;

    Enqueue(&front,1);
    Enqueue(&front,2);
    Enqueue(&front,3);
    Enqueue(&front,4);
    Enqueue(&front,5);

    display(front);


    Dequeue(&front);
    Dequeue(&front);
    Dequeue(&front);
    Enqueue(&front,6);
    
    display(front);


    return 0;
}