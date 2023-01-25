#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *Rlink;
    struct node *Llink;
}node;

node *createNode(int data){
    node *new=malloc(sizeof(node));
    new->Llink=NULL;
    new->Rlink=NULL;

    new->data=data;
}

//! INSERTION IN BST 

node *Insertion(node *root,int data){
    

    if(root==NULL){
        return createNode(data);
    }
    
    
    if(data>root->data){
        root->Rlink = Insertion(root->Rlink,data);
    }

    else if(data<root->data){
        root->Llink = Insertion(root->Llink,data);
    }

    return root;
}


//! SEARCHING IN BST 

int search(node *root,int key){
    int f=0;

    if(root==NULL){
        printf("Empty Tree.");
    }

    else{
        node *ptr=root;

        while(ptr!=NULL){

            if(ptr->data==key){
                f=1;
                break;
            }

            else if(key>ptr->data){
                ptr=ptr->Rlink;
            }

            else if(key<ptr->data){
                ptr=ptr->Llink;
            }
        }
    }

    return f;
}


//!  MAXIMUM AND MINIMUM IN BST

void max_min(node *root){
    
    
    node *ptr=root;

    int max;
    while(ptr!=NULL){
        max=ptr->data;
        ptr=ptr->Rlink;
    }

    ptr=root;

    int min;
    while(ptr!=NULL){
        min=ptr->data;
        ptr=ptr->Llink;
    }
    

    printf("\nMaximum : %d",max);
    printf("\nMinimum : %d",min);
}


//!  INORDER TRAVERSAL

node *Inorder(node *root){
    node *ptr=root;
    if(ptr!=NULL){
        Inorder(ptr->Llink);

        printf("%d ",(ptr->data));

        Inorder(ptr->Rlink);
    }
}


int main(){

    node *root=NULL;

    int choice=0;
    int val,y;

    while(choice!=5){
        printf("\nTree Menu : ");

        printf("\n1> Insertion\n2> Searching\n3> Max & Min\n4> Display\n5> Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d",&choice);

        switch(choice){

            case 1:
                
                printf("\nEnter Value : ");
                scanf("%d",&val);

                Insertion(root,val);
                break;
            
            case 2:
                
                printf("Enter Data to Search :");
                scanf("%d",&y);

                if(search(root,y)){
                    printf("\nPresent.");
                }
                else{
                    printf("\nNot Present.");
                }
                break;

            case 3:
                max_min(root);
                break;

            case 4:
                printf("\nTree : ");
                Inorder(root);
                break;

            case 5:
                printf("\nExiting.....");
                break;
            
            default:
                printf("\nInvalid Input.");
        }
    }

    

    return 0;
}