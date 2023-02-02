#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

node *create_node(int item){
    node *new=malloc(sizeof(node));
    new->data=item;
    new->link=NULL;

    return new;
}

void insertion(node **root,int item){
    node *new=create_node(item);

    if(*root==NULL){
        *root=new;
    }
    else if((*root)->link==NULL){
        (*root)->link=new;
    }

    else{
        node *ptr=*root;
        while(ptr->link!=NULL){
            ptr=ptr->link;
        }
        ptr->link=new;
    }
}


void display(node *root){
    node *temp=root;
    printf("\nLinked List : ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
}


//! REVERSE

void reverse(node **root){
    node *pre,*curr,*next;
    pre=NULL;
    curr=*root;
    next=NULL;

    while(curr!=NULL){
        next=curr->link;
        curr->link=pre;
        pre=curr;
        curr=next;
        
    }
    *root=pre;

}




int main(){
    node *root=NULL;
    insertion(&root,1);
    insertion(&root,2);
    insertion(&root,3);
    insertion(&root,4);

    display(root);

    reverse(&root);

    display(root);
    return 0;
}


