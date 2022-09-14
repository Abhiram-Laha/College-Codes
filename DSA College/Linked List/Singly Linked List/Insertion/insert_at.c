#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;


void insert_at(node *head,node *ele,int p){

    int count=1;
    if(head==NULL){
        printf("Empty Linked List.");
    }

    else{
        node *ptr=head;
        while(ptr->link!=NULL){
            count++;
            if(count==p){
                ele->link=ptr->link;
                ptr->link=ele;
            }
            else{
                ptr=ptr->link;
            }
        }

    }
}











void display(node *head){
    node *ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}

int main(){

    node *head=malloc(sizeof(node));
    node *node2=malloc(sizeof(node));
    node *node3=malloc(sizeof(node));
    node *node4=malloc(sizeof(node));
    node *node5=malloc(sizeof(node));


    head->data=5;
    head->link=node2;

    node2->data=9;
    node2->link=node3;

    node3->data=17;
    node3->link=node4;

    node4->data=21;
    node4->link=NULL;

    node *newNode=malloc(sizeof(node));       // New Node For Insertion
    newNode->data=77;
    newNode->link=NULL;

    printf("\nLinked List before Insertion : ");
    display(head);

    int x;
    printf("\n\nEnter Position : ");    // x input
    scanf("%d",&x);

    insert_at(head,newNode,x);         //insert after function calling


    
    printf("\nLinked List after Insertion : ");
    display(head);

   

    return 0;
}