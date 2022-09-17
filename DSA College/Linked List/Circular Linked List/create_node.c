#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

node* create_node(int x){
    node *temp=malloc(sizeof(node));
    temp->data=x;
    temp->link=temp;
    return temp;
}

int main(){

    node *node1=create_node(5);
    

    node *node2=create_node(7);
    node2->link=node1->link;
    node1->link=node2;

    node *last=node2;

    printf("%d %d",node1->data,node2->data);
    printf("\nLast : %d",last->data);
    return 0;
}