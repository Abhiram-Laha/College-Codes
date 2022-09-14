#include<stdio.h>
#include<Stdlib.h>


typedef struct node{
    int data;
    struct node *link;
}node;


void insert_before(node *head,node *ele,int x){
    node *ptr=head;
    int flag=0;

    if(ptr==NULL){
        printf("Empty Linked List.");
    }

    else{
        while(ptr->link!=NULL){

            if(ptr->link->data==x){

            ele->link=ptr->link;
            ptr->link=ele;

            printf("Node Inserted\n,");
            flag=1;
            break;
            }

            else{
            ptr=ptr->link;
            }
        }
        

    }

    if(flag==0){
        printf("Element Not Found.");
    }
}

void display(node *head){
    if(head==NULL){
        printf("Empty Linked List.");
    }
    else{
        node *ptr=head;
        while(ptr!= NULL){
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
    }
}


int main(){

    node *head=NULL;
    head=malloc(sizeof(node));

    

    node *current=malloc(sizeof(node));
    current->data=17;
    current->link=NULL;

    head->data=5;
    head->link=current;

    current=malloc(sizeof(node));

    current->data=23;
    current->link=NULL;

    head->link->link=current;





    printf("\nLinked List before Insertion : ");
    display(head);

    int x;
    printf("\nEnter Element : ");
    scanf("%d",&x);

    node *newNode=malloc(sizeof(node));

    newNode->data=57;
    newNode->link=NULL;

    insert_before(head,newNode,x);

    printf("\nLinked List after Insertion : ");
    display(head);


    return 0;
}