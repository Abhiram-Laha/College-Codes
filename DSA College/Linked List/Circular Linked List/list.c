#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

int insert_last(node *head,int x){

    if(head==NULL){
        head->link=NULL;
        head->data=x;
        printf("\nNode Inserted.");
    }
    else{
        node *new=malloc(sizeof(node));
        new->data=x;
        new->link=NULL;

        node *ptr=head;
        while(ptr->link!=NULL){
            ptr=ptr->link;
        }
        ptr->link=new;
        printf("\nNode Inserted.");
    }
}


void display(node *head){
    node *ptr=head;

    printf("Linked List : ");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}

int main(){
    node *head=malloc(sizeof(node));
    head=NULL;
    display(head);

    insert_last(head,8);
    insert_last(head,10);
    insert_last(head,12);
    insert_last(head,14);

    display(head);
    


    return 0;
}