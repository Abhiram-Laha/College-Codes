#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *Llink;
    struct node *Rlink;
}node;

node *create_node(int x){
    node *new=malloc(sizeof(node));
    new->data=x;
    new->Llink=NULL;
    new->Rlink=NULL;

    return new;
}

void insert_last(node *head,int x){
    if(head==NULL){                     // ! No element 
        head=create_node(x);
       // printf("\nNode Inserted at Last.");
    }

    else{                                // ! More than One Element
        node *ptr=head;
        while(ptr->Rlink!=NULL){
            ptr=ptr->Rlink;
        }

        node *new=create_node(x);    //new node

        ptr->Rlink=new;          // ! <1>
        new->Llink=ptr;         // ! <2>

        //printf("\nNode Inserted at Last.");
    }
}


void insert_first(node **head,int x){
    if(*head==NULL){
        *head=create_node(x);
        //printf("\nNode Inserted at First.");
    }

    else{
        node *new=create_node(x);

        new->Rlink=*head;
        (*head)->Llink=new;

        *head=new;

        //printf("\nNode Inserted at First.");
        
    }
}


void insert_at(node *head,int p,int x){
    if(head==NULL){
        printf("Empty List.");
    }
    else{
        int flg=0,count=0;
        node *ptr=head;

        while(ptr!=NULL){
            count++;                  // ! to find node index
            if(p==count){

                node *new=create_node(x);
                ptr->Llink->Rlink=new;
                new->Rlink=ptr;

                flg=1;
                break;

            }
            else{
                ptr=ptr->Rlink;
            }
        }

        if(flg==0){
            printf("\nPosition Not Found.");
        }
        /*else{
            printf("\nNew Node Inserted at %d Position.",p);
        }*/

        
    }
}


void display(node *head){
    if(head==NULL){
        printf("\nEmpty List.");
    }
    else{
        printf("\nLinked List : ");
        node *ptr=head;
        while(ptr!=NULL){               // ? Traversal
        printf("%d ",ptr->data);
        ptr=ptr->Rlink;
        }
    }
}


int take_input(){
    int n;
    printf("Enter Value to Insert : ");
    scanf("%d",&n);

    return n;

}




int main(){
    node *head=create_node(1);

    int ch=1,n;

    while(ch!=5){
        printf("\n\nInsertion Operation Menu : ");
        printf("\n\t1> Insert at First ");
        printf("\n\t2> Insert at Last ");
        printf("\n\t3> Insert at Position ");
        printf("\n\t4> Display ");
        printf("\n\t5> Exit ");

        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                n=take_input();
                insert_first(&head,n);
                break;

            case 2:
                n=take_input();
                insert_last(head,n);
                break;

            case 3:
                int p;
                printf("Enter Position : ");
                scanf("%d",&p);

                n=take_input();
                insert_at(head,p,n);
                break;

            case 4:
                display(head);
                break;

            case 5:
                printf("Exiting.....");
                break;
            
            default:
                printf("Invalid Input");

        }
    }

   

    return 0;
}