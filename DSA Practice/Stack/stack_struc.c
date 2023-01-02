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
        
    }
}
