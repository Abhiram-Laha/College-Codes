#include<stdio.h>
#define SIZE 10

typedef struct Stack{
    int top;
    int S[SIZE];
}Stack;

Stack s1;

void PUSH(int x,int n){
    if(s1.top==n-1){
        printf("Overflow!!");
    }
    else{
        s1.top++;
        s1.S[s1.top]=x;
        printf("\n%d PUSHED SUCESSFULLY !!",x);
    }

}

void POP(){
    if(s1.top==-1){
        printf("Empty Stack!!");
    }
    else{
        int v=s1.S[s1.top];
        s1.top--;
        printf("\n%d POPED SUCESSFULLY!!\n",v);
    }
}

void display(){
    if(s1.top==-1){
        printf("Empty Stack!!");
    }
    else{
        printf("\nStack : ");
        for(int i=0; i<=s1.top; i++){
            printf("%d ",s1.S[i]);
        }
    }
}


int main(){
    s1.top=-1;

    int ch=1, n;

    printf("Enter Size of Stack : ");
    scanf("%d",&n);

    while(ch!=4){
        printf("\n\tSTAcK MENU\n\t1> PUSH\n\t2> POP\n\t3> DISPLAY\n\t4> EXIT");
        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                int v;
                printf("\nEnter Value to Push : ");
                scanf("%d",&v);
                PUSH(v,n);
                break;
            case 2:
                POP();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting......");
                break;

        }
    }


    return 0;
}