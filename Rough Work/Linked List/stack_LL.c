#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

node *create(){
    node *new_node=malloc(sizeof(node));
    new_node->link=NULL;
    return new_node;
}

// ? PUSH

void push(node **head,int data){
    node *new=create();
    new->data=data;

    if(*head==NULL){
        *head=new;
    }
    else{
        new->link=*head;
        *head=new;
    }

}

// ? POP

void pop(node **head){
    *head=(*head)->link;
}



// ? DISPLAY

void display(node *head){
    node *ptr=head;
    printf("Stack : ");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}

int main(){
    node *head=NULL;

    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);

    pop(&head);

    display(head);
}