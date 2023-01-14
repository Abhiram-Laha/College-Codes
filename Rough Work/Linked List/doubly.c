#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *Llink;
    struct node *Rlink;
}node;

void insert_last(node **head,int data){
    node *new=malloc(sizeof(node));
    new->Llink=NULL;
    new->Rlink=NULL;
    new->data=data;

    if(*head==NULL){
        *head=new;
    }

    else if((*head)->Llink==NULL){
        (*head)->Llink=new;
    }

    else{
        node *ptr=*head;
        while(ptr->Llink!=NULL){
            ptr=ptr->Llink;
        }

        ptr->Llink=new;
    }

}



void display(node *head){
    node *temp=head;
    printf("Linked List : ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->Llink;
    }
}

int main(){
    node *head=NULL;
    insert_last(&head,1);
    insert_last(&head,2);
    insert_last(&head,3);
    insert_last(&head,4);

    printf("%d",head);

    display(head);
    return 0;
}