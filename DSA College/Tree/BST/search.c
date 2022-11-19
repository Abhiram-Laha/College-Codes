#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *Rlink;
    struct node *Llink;
}node;



void inorder(node *root){
    node *ptr=root;
    if(ptr!=NULL){
        inorder(ptr->Llink);

        printf("%d ",ptr->data);

        inorder(ptr->Rlink);
    }
}

void insert(node **root,int data){
    node *new=malloc(sizeof(node));
    new->data=data;
    new->Llink=NULL;
    new->Rlink=NULL;

    if(*root==NULL){
        *root=new;
    }
    else{
        node *ptr,*par;
        ptr=*root;
        while(ptr!=NULL){
            if(data>ptr->data){
                par=ptr;
                ptr=ptr->Rlink;
            }

            else if(data<ptr->data){
                par=ptr;
                ptr=ptr->Llink;
            }

            else if(data==ptr->data){
                printf("Can't Perform.");
            }
        }


        if(data>par->data){
            par->Rlink=new;
        }
        else{
            par->Llink=new;
        }
    }
}

void search(node *root,int item){            // ! MAIN CODE OF SEARCHING
    int flg=0;

    if(root==NULL){
        printf("Empty Tree.");
    }
    else{
        node *ptr=root;
        
        while(ptr!=NULL){
            if(item==ptr->data){            // ITEM FOUND
                flg=1;
                break;
            }
            else if(item>ptr->data){              // RIGHT SUBTREE
                ptr=ptr->Rlink;
            }
            else if(item<ptr->data){                // LEFT SUBTREE
                ptr=ptr->Llink;
            }
            else{
                flg=-1;
            }
        }
    }

    if(flg==1){
        printf("\nElement Present.");
    }
    else{
        printf("\nElement Not Found.");
    }

}



int main(){
    node *root=NULL;

    insert(&root,51);
    insert(&root,10);
    insert(&root,15);
    insert(&root,60);

    printf("Tree : ");
    inorder(root);


    search(root,15);



    return 0;
}