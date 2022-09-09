#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

void insert_start(node **head,int item){
    node *temp=(node *)malloc(sizeof(node));

    temp->data=item;
    temp->link=*head;

    *head=temp;
}


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
    node *node2=malloc(sizeof(node));
    node *node3=malloc(sizeof(node));
    node *node4=malloc(sizeof(node));
    node *node5=malloc(sizeof(node));


    head->data=5;
    head->link=node2;

    node2->data=9;
    node2->link=node3;

    node3->data=17;
    node3->link=node4;

    node4->data=21;
    node4->link=NULL;

    insert_start(&head,71);

    display(head);

   

    return 0;
}