#include<stdio.h>
#include<string.h>
#define size 20 

typedef struct stack{
    int top;
    int arr[size];
}stack;

stack s1;

int isEmpty(){
    return s1.top==-1;
}

int isFull(){
    return s1.top==size-1;
}

int PEEK(){
    return s1.arr[s1.top];
}

void PUSH(int data){
    if(isFull()){
        printf("Stack is FULL !! ");
    }
    else{
        s1.top++;
        s1.arr[s1.top]=data;
        //printf("\n%d is Pushed.",data);
    }
}

int POP(){
    if(isEmpty()){
        printf("Stack is EMPTY !!");
    }
    else{
        int v=s1.arr[s1.top];
        s1.top--;

        return v;
    }
}


void DISPLAY(){
    if(isEmpty()){
        printf("Stack is EMPTY !!");
    }
    else{
        printf("\nStack : ");
        
        for(int i=s1.top; i>=0; i--){
            printf("%d ",s1.arr[i]);
        }
    }
}


//                                             REVERSE A STRING
void REVERSE(char ch[]){
    for(int i=0; i<strlen(ch); i++){
        PUSH(ch[i]);
    }
    printf("Reversed String : ");
    for(int i=0; i<strlen(ch); i++){
        printf("%c",POP());
    }
}

int main(){
    s1.top=-1;

    //Reverse a String
    char ch[30];
    printf("Enter a String : ");
    gets(ch);

    REVERSE(ch);

    

}

