#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *Llink;
    struct node *Rlink;
}node;

node *create(int data){
    node *new=malloc(sizeof(node));
    new->data=data;
    new->Llink=NULL;
    new->Rlink=NULL;

    return new;
}



void insert_last(node **head,int data){
    node *new=create(data);

    if(*head==NULL){
        *head=new;
    }

    else if((*head)->Rlink==NULL){
        (*head)->Rlink=new;
        new->Llink=*head;
    }

    else{
        node *ptr=*head;
        while(ptr->Rlink!=NULL){
            ptr=ptr->Rlink;
        }
        ptr->Rlink=new;
        new->Llink=ptr;
    }
}



void insert_at(node *head,int pos,int data){
    
}






void display(node *head){
    node *ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->Rlink;
    }
}



int main(){

    node *head;
    head=NULL;

    insert_last(&head,1);
    insert_last(&head,2);
    insert_last(&head,3);
    insert_last(&head,4);
    insert_last(&head,5);
    insert_last(&head,6);

    display(head);


    return 0;
}