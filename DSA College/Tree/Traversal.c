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


void In_Order(node *root){                         // MAIN CODE OF IN ORDER
    node *ptr=root;
    if(ptr!=NULL){

        In_Order(root->left);
        printf("%d ",ptr->data);
        In_Order(root->right);        
    }
}


void Post_Order(node *root){                         // MAIN CODE OF POST ORDER
    node *ptr=root;
    if(ptr!=NULL){

        Post_Order(root->left);
        Post_Order(root->right);   
        printf("%d ",ptr->data);     
    }
}


void Level_Order(node *root){
    node *ptr=root;

    int arr[20];
    arr[0]=root->data;

    int l=sizeof(arr)/sizeof(arr[0]);

    if(l!=0){
        for(int i=1; i<10; i++){
            arr
        }
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
    node *p7=createnode(7);


    // Linking of Nodes

    root->left=p2;
    p2->left=p4;
    p2->right=p5;

    root->right=p3;
    p3->right=p6;

    p6->left=p7;

    /* Tree Looks Like
            1
          /  \
        2     3
       /  \     \
     4     5      6
                /
               7 


    */

   printf("Pre-Order Traversal : ");
   Pre_Order(root);

   printf("\n\nIn-Order Traversal : ");
   In_Order(root);

   printf("\n\nPost-Order Traversal : ");
   Post_Order(root);

    return 0;
}