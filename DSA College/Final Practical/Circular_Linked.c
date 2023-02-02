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
void insertion(int *head,int data){

}