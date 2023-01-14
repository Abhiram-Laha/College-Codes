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

// ? DELETION 

void delete_first(node **head){
    if(*head==NULL){
        printf("Empty Linked List.");
    }
    else if((*head)->link==NULL){
        *head=NULL;
    }
    else{
        node *temp=(*head)->link;
        *head=temp;
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


// ! SMALLEST  &  LARGEST

void large(node *head){
    node *ptr=head;
    int max=ptr->data;
    int min=ptr->data;

    while(ptr!=NULL){
        if(max<ptr->data){
            max=ptr->data;
        }

        if(min>ptr->data){
            min=ptr->data;
        }

        ptr=ptr->link;
    }

    printf("\nLargest Number : %d",max);
    printf("\nSmallest Number : %d",min);
}



int main(){
    node *head=NULL;

    insert_last(&head,1);
    insert_last(&head,2);
    insert_last(&head,3);
    insert_last(&head,4);
    insert_last(&head,5);
    insert_last(&head,6);
    insert_last(&head,7);
    insert_last(&head,8);

    //delete_first(&head);
   
    display(head);

    large(head);



    return 0;
}

