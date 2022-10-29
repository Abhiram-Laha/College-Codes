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
    return new;
}

void PUSH(node **top,int data){
    node *new=create(data);

    if(*top==NULL){
        *top=new;
    }
    else{
        new->link=*top;
        *top=new;
    }
}


void POP(node **top){
    if(top==NULL){
        printf("Empty Stack.");
    }
    else{
        *top=(*top)->link;
    }
}

void display(node *top){
    if(top==NULL){
        printf("Empty Stack.");
    }
    else{
        node *ptr=top;
        printf("\nStack : ");
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
    }
}


int main(){

    node *top;
    top=NULL;

    PUSH(&top,1);
    PUSH(&top,2);
    PUSH(&top,3);
    PUSH(&top,4);
    PUSH(&top,5);

    display(top);

    POP(&top);
    POP(&top);


    display(top);

    return 0;
}