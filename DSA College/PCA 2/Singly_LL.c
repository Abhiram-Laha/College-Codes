#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *link;
}Node;

Node *create_node(int item){
    Node *new=malloc(sizeof(Node));
    new->data=item;
    new->link=NULL;
    return new;
}

//                                                          INSERTION

void insert_last(Node *head,int item){
    Node *new=create_node(item);
    if(head==NULL){
        head=new;
    }
    else if(head->link==NULL){
        head->link=new;
    }
    else{
        Node *ptr=head;
        while(ptr->link!=NULL){
            ptr=ptr->link;
        }
        ptr->link=new;
    }
}

void insert_start(Node **head,int item){

    Node *new=create_node(item);
    if(*head==NULL){
        *head=new;
    }
    else{
        new->link=*head;
    }
    *head=new;
}

void insert_at(Node **head,int item,int pos){
    int flg=1;
    Node *new=create_node(item);
    if(pos==1){
        new->link=*head;
        *head=new;
    }
    else{
        Node *ptr=*head;
        while(ptr->link!=NULL){
            flg++;
            if((pos)==flg){
                new->link=ptr->link;
                ptr->link=new;
            }
            else{
                ptr=ptr->link;
            }
        }
        
    }
    
}

//                                                      DELETION

void delete_first(Node **head){
    if((*head)->link==NULL){
        *head=NULL;
    }
    else{
        *head=(*head)->link;
    }
}



void delete_last(Node **head){
    if(*head==NULL){
        printf("Empty Linked List.");
    }
    else if((*head)->link==NULL){
        *head==NULL;
    }
    else{
        Node *ptr=*head;
        while(ptr->link->link!=NULL){
            ptr=ptr->link;
        }
        ptr->link=NULL;
    }
}


void delete_at(Node **head,int pos){
    int f=count_node(*head);
    if(*head==NULL){
        printf("Empty Linked List.");
    }
    else if((*head)->link==NULL && pos==1){
        *head==NULL;
    }
    else if(pos>f){
        printf("Can't Perform Operation.");
    }
    else{
        int flg=1;
        Node *ptr=*head;
        while(ptr->link!=NULL){
            flg++;
            if(pos==flg){
                ptr->link=ptr->link->link;
            }
            else{
                ptr=ptr->link;
            }
        }
    }
}







int count_node(Node *head){
    Node *ptr=head;
    int c=1;
    while(ptr->link!=NULL){
        c++;
        ptr=ptr->link;
    }
    return c;
}

void display(Node *head){
    if(head==NULL){
        printf("Empty Linked List.");
    }
    else{
        printf("\nLinked List : ");
        Node *ptr=head;
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
    }
}

int main(){
    Node *head=create_node(1);
    insert_last(head,2);
    insert_last(head,3);
    insert_last(head,4);
    insert_last(head,5);
    insert_last(head,6);
    insert_last(head,7);

    //insert_at(&head,9,5);

    printf("\nBefore Deletion : \n");
    display(head);

    printf("\n\nAfter Deletion : \n");

    delete_at(&head,3);


    delete_first(&head);
    delete_last(&head);


    display(head);



    printf("\n\nTotal Nodes : %d",count_node(head));
    return 0;
}