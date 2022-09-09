#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

int main(){

    node *head=(node *)malloc(sizeof(node));

    head->data=5;    //1

    node *current=malloc(sizeof(node));

    current->data=7;       //2

    head->link=current;

    current=malloc(sizeof(node));

    current->data=9;   //3
    current->link=NULL;

    head->link->link=current;

    printf("Node 2 : %d",head->link->data);
    




    return 0;
}