#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;


void delete_at(node **head,int p){
    node *ptr=*head;
    int count=1;
    if(ptr==NULL){
        printf("Empty Linked List!!");
    }
    else{
        while(ptr->link!=NULL && count!=p-1){
            count++;
            ptr=ptr->link;
        }

        node *q=ptr->link->link;
        ptr->link=q;

    }
}

void insert_last(node *head,int item){
    node *ptr;

    node *temp=malloc(sizeof(node));


    temp->data=item;
    temp->link=NULL;

    ptr=head;

    while(ptr->link!=NULL){
        ptr=ptr->link;
    }

    ptr->link=temp;
}


void display(node *head){
    

    printf("\nLinked List : ");
    if(head==NULL){
        printf("Empty Linked List.");
    }
    else{
        node *ptr=head;
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
    }
}


int main(){

    node *head=malloc(sizeof(node));

    head->data=0;
    head->link=NULL;

    insert_last(head,1);
    insert_last(head,2);
    insert_last(head,3);
    insert_last(head,4);
    insert_last(head,5);

    delete_at(&head,3);

    

    display(head);

    return 0;
}