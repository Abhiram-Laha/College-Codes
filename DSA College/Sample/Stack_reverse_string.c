#include<stdio.h>
#include<string.h>
#define size 50

typedef struct stack{
    char stack[size];
    int top;
}stack;

stack s;


void push(char x){
    if(s.top==size-1){
        printf("Stack Overflow!!");
    }
    else{
        s.top=s.top+1;
        s.stack[s.top]=x;
        printf("\nElement Pushed.....");
    }
}

char pop(){
    int val;
    if(s.top==-1){
        printf("Empty Stack!!");
    }
    else{
        val=s.stack[s.top];
        s.top=s.top-1;
        return val;
    }
}

void display(){
    for(int i=s.top; i>=0; i--){
        printf("%c",s.stack[i]);
    }
}

int main(){

    stack s1;
    s1.top=-1;


    char a[50];
    printf("Enter a String : ");
    gets(a);


    int len=strlen(a);

    for(int i=0; i<len; i++){
        push(a[i]);
    }

    printf("\n\nStack : ");
    display();


    char nstr[len];
    int i;
    for(i=0; i<len; i++){
        nstr[i]=pop();
    }

    nstr[i]='\0';

    printf("\n\nNew Reversed String : ");
    puts(nstr);

return 0;
}



