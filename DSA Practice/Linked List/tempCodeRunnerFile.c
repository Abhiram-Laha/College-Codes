/*

Input: a = 1->2->3->4, b = 1->2->3->4
Output: Identical

Input: a = 1->3->5->2, b = 1->3->4->6
Output: Not Identical

*/

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


void checking(node *a,node *b){       // ! MAIN  IDENTICAL  CHECKING  FUNCTION
    node *ptr1,*ptr2;

    ptr1=a;
    ptr2=b;

    int flg=0;

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data==ptr2->data){
            flg=1;
        }
        else{
            flg=0;
            break;
        }
        ptr1=ptr1->link;
        ptr2=ptr2->link;

    }

    if(flg==1){
        printf("\n\nIdentical");
    }
    else{
        printf("\n\nNot Identical");
    }
}




int main(){

    node *a=NULL;
    node *b=NULL;

    insertion(&a,1);
    insertion(&a,2);
    insertion(&a,3);
    insertion(&a,4);
    insertion(&a,51);



    insertion(&b,1);
    insertion(&b,7);
    insertion(&b,3);
    insertion(&b,4);
    
    
    display(a);
    display(b);

    checking(a,b);

    


    return 0;
}