#include<stdio.h>

int stack[100],top=-1,n;


void display(){
    printf("\n\nStack : ");
    for(int i=top; i>=0; i--){
        printf("%d ",stack[i]);
    }
    if(top<0){
        printf("Stack is Empty!!");
    }
}

void push(){
    if(top==n-1){
        printf("Stack is Overflow!!");
    }
    else{
        int val;
        printf("Enter Value : ");
        scanf("%d",&val);

        top++;
        stack[top]=val;

    }
}

void pop(){
    if(top<0){
        printf("Underflow");
    }
    else{
        top--;
    }
}





int main(){

    int choice;

    printf("Enter the number of elements in the stack : ");
    scanf("%d",&n);

    printf("\nStack Operations Using Array : \n");

    while(choice!=4){

        printf("\n\nChoose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice){

        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting......");
            break;
        default:
            printf("Invaild Input!!");



        }
    }

return 0;
}
