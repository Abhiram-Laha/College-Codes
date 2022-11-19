#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *Rlink;
    struct node *Llink;
}node;


node *create_node(int data){
    node *new=malloc(sizeof(node));
    new->data=data;
    new->Llink=NULL;
    new->Rlink=NULL;
}


void insertion(node **root,int data){
    node *new=create_node(data);

    if(*root==NULL){          /* If tree is totally empty*/
        *root=new;
    }

    else{
        node *ptr,*pre;
        ptr=*root;

        while(ptr!= NULL){

            if(data>ptr->data){                // Right Subtree
                pre=ptr;
                ptr=ptr->Rlink;
            }

            else if(data<ptr->data){                //Left Subtree
                pre=ptr;
                ptr=ptr->Llink;
            }

            else if(data==ptr->data){
                printf("Data Already Exist.");               // No duplicate data values
            }
        }

        if(data>pre->data){
            pre->Rlink=new;
        }

        else{
            pre->Llink=new;
        }
    }
}

void inorder(node *root){
    node *ptr=root;
    if(ptr!=NULL){
        inorder(ptr->Llink);

        printf("%d ",ptr->data);

        inorder(ptr->Rlink);
    }
}



int main(){
    node *root=NULL;

    insertion(&root,50);
    insertion(&root,30);
    insertion(&root,5);
    insertion(&root,110);

    //printf("%d",root->Rlink->data);

    printf("In-Order Traversal : ");
    inorder(root);

    return 0;
}