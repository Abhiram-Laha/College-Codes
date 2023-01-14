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

// ? INSERTION

void insert_last(node **head,int data){
    node *new=create();
    new->data=data;

    if((*head)==NULL){
        *head=new;

    }
    else if((*head)->link==NULL){    // Single Node
        (*head)->link=new;
    }

    else{
        node *temp=*head;
        while(temp->link!=NULL){
            temp=temp->link;
        }

        temp->link=new;
    }
}


// ? DISPLAY

void display(node *head){
    if(head==NULL){
        printf("Empty List");
    }
    else{
        printf("Linked List : ");
        node *temp=head;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->link;
        }
    }
}


//! REVERSE THE LINKED LIST

void reverse(node **head){
    node *pre,*cur,*next;
    pre=NULL;
    cur=*head;
    next=NULL;

    while(cur!=NULL){
        next=cur->link;
        cur->link=pre;
        pre=cur;
        cur=next;
        
    }
    *head=pre;
}



int main(){

    node *head=NULL;
    insert_last(&head,1);
    insert_last(&head,2);
    insert_last(&head,3);
    insert_last(&head,4);
    insert_last(&head,5);
    insert_last(&head,6);

    reverse(&head);

    display(head);

    return 0;
}