#include<stdio.h>
#include<string.h>
#include <stdbool.h>

int top=-1,n;
char stack[50];

void PUSH(char a){
    if(top==n-1){
        printf("Overflow");
    }
    else{
        top++;
        stack[top]=a;

    }
}

void POP(){
    if(top==-1){
        printf("Empty Stack!!");
    }
    else{
        top--;
    }
}

void display(){
    for(int i=top; i>=0; i--){
        printf("%c",stack[i]);
    }
}

bool isopening(char x){
    if(x=='(' || x=='{' || x=='['){
        return 1;
    }
    else{
        return 0;
    }
}

bool isEmpty(){
    if(top==-1){
        return 0;
    }
    else{
        return 1;
    }
}

bool isMatching(char x,char y){
    if((x=='(' && y==')') || (x=='{' && y=='}') || (x=='[' && y==']')){
        return 1;
    }
    else{
        return 0;
    }
}



int main(){

    char str[50];
    printf("\nEnter Expression : ");
    gets(str);

    int l=strlen(str),c=1;
    n=l;

    for(int i=0; i<l; i++){

        if(isopening(str[i])){
            PUSH(str[i]);
           // printf("Top : %d",top);
        }
        else{
          if(isMatching(stack[top],str[i])){
            POP();
          }
          else if(isEmpty){
            c=0;
          }
          else{
            c=0;
          }
          
        }

    }

    if(isEmpty){
        c=1;
    }

    if(c==0){
        printf("\nUnbalanced Parentheses.");
    }
    else{
        printf("\nBalanced Parentheses.");
    }

    display();

    return 0;
}