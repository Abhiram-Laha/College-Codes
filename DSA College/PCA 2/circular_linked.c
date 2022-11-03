#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;



void insert_last(node **last,int data){           // enqueue
    node *new=malloc(sizeof(node));
    new->data=data;

    if(*last==NULL){
        new->link=new;
        *last=new;
    }
    else{
        new->link=(*last)->link;
        (*last)->link=new;
        *last=new;
    }

    
}


void delete_front(node **last){        // dequeue
    if(*last==NULL){
        printf("Not Possible");
    }
    else{
        node *temp;
        temp=(*last)->link->link;
        (*last)->link=temp;

    }
}


void display(node *last){
    node *ptr=last->link;
    printf("\nList : ");
    while(ptr->link!=last->link){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}


int main(){
    node *last;
    last=NULL;

    insert_last(&last,1);
    insert_last(&last,2);
    insert_last(&last,3);
    insert_last(&last,4);
    insert_last(&last,5);
    insert_last(&last,6);

    display(last);


    delete_front(&last);

    display(last);
    
    return 0;
}



