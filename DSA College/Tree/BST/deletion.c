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



void delete(node *root,int item){
    node *ptr,*par;
    ptr=root;

    //SEARCH PART

    while(ptr!=NULL){
        if(item==ptr->data){
            break;
        }
        else if(item>ptr->data){
            par=ptr;
            ptr=ptr->Rlink;
        }
        else if(item<ptr->data){
            par=ptr;
            ptr=ptr->Llink;
        }
    }

    //CHECKING PART

    // ! NO CHILD

    if(ptr->Rlink==NULL && ptr->Llink==NULL){
        if(par->Rlink->data==item){
            par->Rlink=NULL;
        }
        else{
            par->Llink=NULL;
        }
    }


    // ! ONE CHILD

    else if(ptr->Llink==NULL){

        if(par->Rlink->data==item){
            par->Rlink=ptr->Rlink;
        }
        else{
            par->Llink=ptr->Rlink;
        }
    }

    else if(ptr->Rlink==NULL){

        if(par->Rlink->data==item){
            par->Rlink=ptr->Llink;
        }
        else{
            par->Llink=ptr->Llink;
        }
    }



    // ! TWO CHILD


    

    
    
}


void delete_two_child(node *root,node *ptr,node *par,int item){
    node *succ,*parsucc;

    if(item<root->data){
        succ=ptr->Rlink;

        while(succ!=NULL){
            parsucc=succ;
            succ=succ->Llink;
        }

        ptr->data=parsucc->data;

    }
}




int main(){
    node *root=NULL;

    insertion(&root,56);
    insertion(&root,12);
    insertion(&root,37);
    insertion(&root,62);
    insertion(&root,71);
    insertion(&root,9);
    insertion(&root,59);

    display(root);

    delete(root,9);

    printf("\n");

    display(root);

    
    return 0;
}