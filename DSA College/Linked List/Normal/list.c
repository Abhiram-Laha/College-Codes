#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

void insert_before(node **head,int p,int v){
    if(*head==NULL && p==1){
        node *new=malloc(sizeof(node));
        new->data=v;
        new->link=NULL;
    }
    else{
        int count=1;
        node *ptr=*head;

        
        while(ptr->link!=NULL){
            count++;
            if(count==p){
                node *new=malloc(sizeof(node));
                new->data=v;
                new->link=ptr->link;
            }
            else{
                ptr=ptr->link;
            }
            
        }
    }

}

int main(){
    node *head=malloc(sizeof(node));
    head->data=5;
    head->link=NULL;

    insert_before(&head,1,7);

    printf("%d",head->link->data);
    return 0;
}