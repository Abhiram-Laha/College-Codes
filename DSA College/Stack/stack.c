#include<stdio.h>

int stack[50],top=-1,n;

void PUSH(){
    if(top==n-1){
        printf("Overflow!!");
    }
    else{
        top++;
        int val;
        printf("\nEnter Value to Push : ");
        scanf("%d",&val);
        stack[top]=val;
    }
}

char POP(){
    if(top<=-1){
        printf("Empty Stack !!");
    }
    else{
        int val=stack[top];
        top--;
        return val;
    }
}

void display(){
    if(top<=-1){
        printf("Empty Stack !!");
    }
    else{
        for(int i=top; i>=0; i--){
            printf("%d ",stack[i]);
        }
    }
}

int main(){

    printf("Enter Size of Stack : ");
    scanf("%d",&n);

    int ch;

    while(ch!=4){
        
    printf("\n\tSTACK OPERATION MENU :\n\n\t1> PUSH \n\t2> POP \n\t3> DISPLAY \n\t4> EXIT");
    printf("\n\nEnter Your Choice : ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        PUSH();
        break;

    case 2:
        POP();
        break;
    case 3:
        printf("\nStack : ");
        display();
        break;

    case 4:
        ch=4;
        printf("Exiting......");
    
    default:
        printf("\nInvalid Input!!");
    }

    }
    
    return 0;
}