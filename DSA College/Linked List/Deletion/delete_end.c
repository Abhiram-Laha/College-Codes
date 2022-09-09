#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;


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

void delete_end(node **head){
    node *ptr=*head;
    if(ptr==NULL){
        printf("Empty Linked List.");
    }
    else if(ptr->link==NULL){
        free(ptr);
        *head=NULL;
    }
    else{
        while(ptr->link->link!=NULL){
            ptr=ptr->link;
        }
        int x=ptr->link->data;
        node *q=ptr->link;
        ptr->link=NULL;
        free(q);
        printf("\n%d Removed!\n",x);
    }
}

int main(){

    node *head=malloc(sizeof(node));

    head->data=5;
    head->link=NULL;

    insert_last(head,7);
    insert_last(head,8);
    insert_last(head,9);

    

    delete_end(&head);

    display(head);

    return 0;
}