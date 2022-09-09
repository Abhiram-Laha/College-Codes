#include<stdio.h>
#include<string.h>
#define size 50

typedef struct stack{
    int top;
    char data[size];
}stack;

stack st;

void PUSH(char x){
    if(st.top==size-1){
        printf("Stack Full");
    }
    else{
        st.top++;
        st.data[st.top]=x;
    }
}

char POP(){
    stack *n;
    *n=st;
    if(n->top==-1){
        printf("Empty Stack!!");
    }
    else{
        int x=n->data[n->top];
        n->top--;
        return x;
    }
}

void display(){
    for(int i=st.top; i>=0; i--){
        printf("%c",st.data[i]);
    }
}


int main(){
    st.top=-1;
    char str[50]="abhiram laha";

    for(int i=0; i<strlen(str); i++){
        PUSH(str[i]);
    }

    printf("\nReversed String : ");
    display();

    return 0;
}