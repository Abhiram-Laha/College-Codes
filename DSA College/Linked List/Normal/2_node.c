#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main(){
    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node));

    head->data=1;
    head->link=NULL;     // Node 1

    struct node *current=(struct node *)malloc(sizeof(struct node));

    current->data=2;
    current->link=NULL;       //Node 2

    head->link=current;    //Linking Part

    printf("Node 1 : %d",head->data);
    printf("\nNode 2 : %d",current->data);


    return 0;
}
