#include<stdio.h>
#include<string.h>

int stack[50],n,top=-1;

void PUSH(char x){
    if(top==n-1){
        printf("Stack Full!!");
    }
    else{
        top++;
        stack[top]=x;
    }
}

char POP(){
    if(top==-1){
        printf("Empty Stack");
    }
    else{
        char v=stack[top];
        top--;
        return v;
    }
}

//special function

int pre(char x){
    switch(x){
        case '^':
            return 3;
            break;
        case '*':
        case '/':
            return 2;
            break;
        case '+':
        case '-':
            return 1;
            break;
    }
}

int isOperand(char x){
    if(x>='0' && x<='9'){
        return 1;
    }
    else{
        return 0;
    }
}

//main conversion

void infix_to_postfix(char str[]){
    char post[strlen(str)];
    int j=0;
    n=strlen(str);

    for(int i=0; i<n; i++){

        char item=str[i];

        if(item=='('){
            PUSH(item);
        }
        
        else if(item==')'){

            while(stack[top]!='('){
                post[j]=POP();
            }
            POP();
        }

        else if(isOperand(item)){
            post[j]=item;
        }

        else{
            if(top!=-1){
                while(pre(item)<=pre(stack[top]) && top!=-1){
                        post[j]=POP();
                }
            }
            else{
                PUSH(item);
            }
        }
        j++;

    }

    if(top!=-1){
        while(top!=1){
            post[j]=POP();
            j++;
        }
    }

   // post[j]='/0';
    printf("\nPostfix Expression : ");
    gets(post);
}


int main(){

    char x[]="2+3*9";
    infix_to_postfix(x);

    return 0;
}