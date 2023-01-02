#include<stdio.h>

#define n 10

typedef struct stack{
    int top;
    int arr[n];
}stack;

stack s;

// PUSH , POP , DISPLAY

// ? PUSH

void PUSH(int size,int data){
    if(s.top==size-1){
        printf("Stack Overflow!!");
    }
    else{
        s.top++;
        s.arr[s.top]=data;
        //printf("\nData Pushed!!");
    }
}

// ? POP

void POP(){
    if(s.top==-1){
        printf("Stack Empty!!");
    }
    else{
        int v=s.arr[s.top];
        s.top--;

        printf("\n%d is Poped!!",v);
    }
}


// ?  DISPLAY

void DISPLAY(int size){
    if(s.top==-1){
        printf("Stack Empty!!");
    }
    else{
        printf("\nStack : ");
        for(int i=s.top; i>=0; i--){
            printf("%d ",s.arr[i]);
        }
    }
}


int main(){

    s.top=-1;
    int s=5;

    PUSH(s,5);
    PUSH(s,4);
    PUSH(s,3);
    PUSH(s,2);
    PUSH(s,1);

    DISPLAY(s);

    POP();

    DISPLAY(s);

    return 0;
}