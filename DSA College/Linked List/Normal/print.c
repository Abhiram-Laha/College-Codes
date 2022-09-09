#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;



void display(node *head){
    printf("Linked List : ");
    node *ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}

int main(){
    node *head=malloc(sizeof(node));

    head->data=7;
    head->link=NULL;

    display(head);

   

    return 0;
}