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

void insertion(node **root,int item){
    node *new=create_node(item);
    
    if(*root==NULL){                      //empty tree
        *root=new;
    }
    else{
        node *ptr=*root;
        node *par;

        while(ptr!=NULL){
            if(item>ptr->data){
                par=ptr;
                ptr=ptr->Rlink;
            }

            else if(item<ptr->data){
                par=ptr;
                ptr=ptr->Llink;
            }

            else if(item==ptr->data){
                printf("Duplicate Item Found.");
                break;
            }
        }

        if(item>par->data){
            par->Rlink=new;
        }
        else{
            par->Llink=new;
        }
    }
}

void display(node *root){
    node *temp=root;
    if(temp!=NULL){
        display(temp->Llink);
        printf("%d ",temp->data);
        display(temp->Rlink);
    }
}


//void delete_no_child()




int main(){
    node *root=NULL;

    insertion(&root,56);
    insertion(&root,12);
    insertion(&root,37);
    insertion(&root,62);
    insertion(&root,71);

    display(root);
    return 0;
}