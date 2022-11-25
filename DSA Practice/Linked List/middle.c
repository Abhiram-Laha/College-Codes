#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;


void insertion(node **root,int data){
    node *new=malloc(sizeof(node));
    new->data=data;
    new->link=NULL;

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
        node *ptr=root;
        printf("\nLinked List : ");
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
}



void middle_element(node *root){     // ! MAIN  MIDDLE ELEMENT FIND CODE
        node *ptr=root;
        int counter;

        if(root!=NULL){
            counter=1;

            while(ptr->link!=NULL){
                counter++;
                ptr=ptr->link;
            }
        }

        int mid=(counter/2);

        if(counter%2==0){
            mid=mid+1;
        }
        else{
            mid=mid+1;
        }
        

        // ? TRAVERSAL

        ptr=root;
        counter=1;

        
        while(ptr!=NULL){
            if(counter!=mid){
                ptr=ptr->link;
                counter++;
            }
            else{
                break;
            }
            
            
        }

        printf("\nMiddle Element : %d",ptr->data);
        
}


int main(){

    node *root=NULL;

    insertion(&root,1);
    insertion(&root,2);
    insertion(&root,3);
    insertion(&root,4);
    insertion(&root,5);
    insertion(&root,6);
    insertion(&root,7);
    insertion(&root,8);
    insertion(&root,9);
    //insertion(&root,10);
    
   
    
    

    display(root);

    middle_element(root);

    return 0;
}