#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};


int main(){

    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node));

    head->data=60;
    head->link=NULL;

    printf("Data : %d",head->data);
    printf("\nLink : %s",head->link);


    return 0;
}