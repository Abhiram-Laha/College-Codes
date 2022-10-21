#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *left;    
    struct node *right;    
}node;

node *createnode(int data){
    node *new=malloc(sizeof(node));
    new->data=data;
    new->left=NULL;
    new->right=NULL;

    return new;
}

//Pre - order Traversal

void Pre_Order(node *root){                         // MAIN CODE OF PRE ORDER
    node *ptr=root;
    if(ptr!=NULL){
        printf("%d ",ptr->data);

        Pre_Order(root->left);        
        Pre_Order(root->right);        
    }
}

int main(){

    //Node Creation

    node *root=createnode(1);
    node *p2=createnode(2);
    node *p3=createnode(3);
    node *p4=createnode(4);
    node *p5=createnode(5);
    node *p6=createnode(6);


    // Linking of Nodes

    root->left=p2;
    p2->left=p4;
    p2->right=p5;

    root->right=p3;
    p3->right=p6;

    /* Tree Looks Like
            1
          /  \
        2     3
       /  \     \
     4     5      6


    */

   printf("Pre-Order Traversal : ");
   Pre_Order(root);

    return 0;
}