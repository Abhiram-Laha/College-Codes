#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *Llink;
    struct node *Rlink;
}node;

node *create(int data){
    node *new=malloc(sizeof(node));
    new->data=data;
    new->Llink=NULL;
    new->Rlink=NULL;

    return new;
}

void insertion(node **root,int item){
    node *new=create(item);

    if(*root==NULL){
        *root=new;
    }
    else{
        node *ptr,*pre;
        ptr=*root;

        while(ptr!=NULL){
            
            if(item>ptr->data){ //right
                pre=ptr;
                ptr=ptr->Rlink;
            }
            else if(item<ptr->data){

                pre=ptr;
                ptr=ptr->Llink;
            }
            else if(item==ptr->data){
                printf("Duplicate Value.");
                return;
            }
        }

        if(item>pre->data){
            pre->Rlink=new;
        }
        else{
            pre->Llink=new;
        }
    }
}

void deletion(node **root,int target){

    node *ptr,*par;
    ptr=*root;
    
    while(ptr!=NULL){
        if(ptr->data==target){
            break;
        }
        else if(target>ptr->data){
            par=ptr;
            ptr=ptr->Rlink;
        }
        else if(target<ptr->data){
            par=ptr;
            ptr=ptr->Llink;
        }
    }

    //? no child

    if(ptr->Llink==NULL && ptr->Rlink==NULL){
        if (par->Rlink->data == target)
        {
            par->Rlink = NULL;
        }
        else
        {
            par->Llink = NULL;
        }
    }

    

    //? ONE CHILD

    else if(par->Rlink==NULL){
        i
    }
}

void inorder(node *root){
    if(root!=NULL){
        inorder(root->Llink);
        printf("%d ",root->data);
        inorder(root->Rlink);
    }
}


int main(){
    node *root=NULL;

    insertion(&root,5);
    insertion(&root,3);
    insertion(&root,9);
    insertion(&root,7);
    insertion(&root,1);

    inorder(root);
    return 0;
}