#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *Llink;
    struct node *Rlink;
}node;

node *create_node(int x){
    node *new=malloc(sizeof(node));
    new->data=x;

    new->Llink=NULL;
    new->Rlink=NULL;

    return new;
}

void display(node *head){
    if(head==NULL){
        printf("Empty List.");
    }
    else{
        printf("Linked List : ");
        node *ptr=head;
        while(ptr!=NULL){               // ? Traversal
        printf("%d ",ptr->data);
        ptr=ptr->Rlink;
        }
    }
}

int main(){
    node *head=create_node(1);
    
    node *curr=create_node(2);

    head->Rlink=curr;

    curr->Llink=head;
    curr->Rlink=NULL;

    display(head);

    return 0;
}