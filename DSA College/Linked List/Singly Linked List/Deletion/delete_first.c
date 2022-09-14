#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;


node *delete_first(node *head){
    node *ptr=head;
    if(head==NULL){              // ? EMPTY LIST
        printf("Empty Linked List.");
    }

    else if(head->link==NULL){          // ? SINGLE NODE 
        head=NULL;
        return head;
    }
    else{                         // ? MORE THAN ONE NODE
        head=ptr->link;
        free(ptr);
        return head;

    }
}


node *insert_last(node *ptr,int x){
    node *new=malloc(sizeof(node));
    new->data=x;
    new->link=NULL;
    
    ptr->link=new;
    return new;
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
    head->data=24;
    head->link=NULL;

    node *ptr=head;


    ptr=insert_last(ptr,25);
    ptr=insert_last(ptr,26);
    ptr=insert_last(ptr,27);

    display(head);

    head=delete_first(head);

    display(head);

    return 0;
}