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
void insertion(node **head,int data){
    node *new=create(data);

    new->link=*head;

    if(*head==NULL){
        *head=new;
    }
    else if((*head)->link==NULL){
        (*head)->link=new;
    }
    else{
        node *ptr=*head;

        while(ptr->link!=*head){
            ptr=ptr->link;
        }

        ptr->link=new;
    }
}


void display(node *head){
    node *ptr=head;

        while(ptr->link!=head){
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
        printf("%d ",ptr->data);
}

int main(){
    node *head=NULL;
    insertion(&head,1);
    insertion(&head,2);
    insertion(&head,3);
    insertion(&head,4);
    insertion(&head,5);

    display(head);
    return 0;
}