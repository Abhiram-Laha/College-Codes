#include<stdio.h>
#include<string.h>

#define n 50

typedef struct stack
{
    int top;
    char data[n];
}stack;

stack m;

void PUSH(char x){
    if(m.top==n-1){
        printf("Overflow!!");
    }
    else{
        m.data[m.top]=x;
        m.top++;
        //printf("Element Pushed!!");
    }
}

char POP(){
    if(m.top==-1){
        printf("\nEmpty Stack!!");
    }
    else{
        return m.data[m.top];
        m.top--;
    }
}

void DISPLAY(){
    printf("\nReversed String : ");
    for(int i=m.top; i>=0; i--){
        printf("%c",m.data[i]);
    }
}


int main(){

    stack s;
    s.top=-1;

    char str[50];

    printf("Enter a String : ");
    gets(str);

    int length=strlen(str);

    for(int i=0; i<length; i++){
        PUSH(str[i]);
    }

    DISPLAY();



    return 0;
}

