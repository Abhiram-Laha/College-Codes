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



void max_min(node *root){            // ! MAIN CODE OF MAX MIN
    node *ptr=root;
    int min,max;


    while(ptr!=NULL){      //? MIN = LEFT SUBTREE
        min=ptr->data;
        ptr=ptr->Llink;
    }

    ptr=root;

    while(ptr!=NULL){             //? MAX = RIGHT SUBTREE
        max=ptr->data;
        ptr=ptr->Rlink;
    }     

    printf("Max : %d\nMin : %d",max,min); 
    
}

int main(){
    node *root=NULL;

    insertion(&root,64);
    insertion(&root,17);
    insertion(&root,25);
    insertion(&root,91);
    insertion(&root,77);
    insertion(&root,6);
    insertion(&root,121);

    max_min(root);
}