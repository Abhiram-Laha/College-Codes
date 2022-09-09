#include<stdio.h>
#include<string.h>
#define size 50

typedef struct stack{
    int top;
    int data[size];
}stack;

stack st;

void PUSH(int x){
    if(st.top==size-1){
        printf("Stack Full");
    }
    else{
        st.top++;
        st.data[st.top]=x;
    }
}


int POP(){
    if(st.top==-1){
        printf("Empty Stack");
    }
    else{
        int v=st.top;
        st.top--;
        return v;
    }
}

void display(){
    for(int i=st.top; i>=0; i--){
        printf("%c",st.data[i]);
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

int operation(char x,char y,char op){
    switch(op){
        case '+':
            return x+y;
        case '-':
            return x-y;
        case '*':
            return x*y;
        case '/':
            return x/y;
    }
}


int main(){
    st.top=-1;
    char str[50]="23+";

    int x,y,op;

    int l=strlen(str),v;

    for(int i=0; i<l; i++){
        char item=str[i];

        if(isOperand(item)){
            printf("%d ",item-'0');
            PUSH(item-'0');

        }
        else{
            op=item;
            printf("%d",st.top);
        }


    }

    printf("\nValue : %d",st.top);



    

    return 0;
}