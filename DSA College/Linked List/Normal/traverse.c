#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

int count_node(node *head){
    int count=0;

    if(head==NULL){
        printf("Empty Linked List.");
    }
    else{
        node *ptr=NULL;
        ptr=head;

        while(ptr!=NULL){
            count++;
            ptr=ptr->link;
            
        }
    }

    return count;
}


void display(node *head){
    printf("\nLinked List : ");
    node *ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}


int main(){

    node *head=(node *)malloc(sizeof(node));

    head->data=5;          // 1
    head->link=NULL;

    node *current=malloc(sizeof(node));

    current->data=15;          // 2
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(node));

    current->data=25;         //3
    current->link=NULL;

    head->link->link=current;           // insert 3rd element

    
    
    printf("\nTotal Nodes : %d",count_node(head));

    display(head);


    return 0;
}