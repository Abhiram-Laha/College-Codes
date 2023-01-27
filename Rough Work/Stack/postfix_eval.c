#include<stdio.h>
#include<string.h>
#define size 10


//? STACK PREPARATION

typedef struct stack{
    int top;
    int arr[size];
}stack;

stack s;

void push(int data){
    if(s.top!=size-1){
        s.top++;
        s.arr[s.top]=data;
    }
}

int pop(){
    if(s.top!=-1){
        int v=s.arr[s.top];
        s.top--;
        return v;
    }
}


void display(){
    int temp=s.top;

    while(temp>-1){
        printf("%d ",s.arr[temp]);
        temp--;
    }
}

//? TO CHECK IS OPERATOR OR NOT
int operator(char c){
    if(c=='*' || c=='-' || c=='/' || c=='+' || c=='^'){
        return 1;
    }

    else{
        return 0;
    }
}


//? TO PERFORM SOME OPERATIONS
int operation(char c,int a,int b){
    if(c=='+'){
        return a+b;
    }
    if(c=='-'){
        return a-b;
    }
    if(c=='*'){
        return a*b;
    }
    if(c=='/'){
        return a/b;
    }
}


//! POSTFLIX MAIN CODE

int postflix(char arr[],int n){
    for(int i=0; i<n; i++){
        
        //? IF DIGIT -> PUSH

        if(operator(arr[i])==0){
            push(arr[i]-'0');
        }
        else{
            int a=pop();
            int b=pop();

            int c=operation(arr[i],a,b);

            push(c);
        }
    }
    return pop();
}


int main(){

    char ans[20]={'\0'};
    printf("Enter Postflix Expression  : ");
    gets(ans);

    int l=strlen(ans);

    printf("Posflix Expression : %s",ans);

  

    int val = postflix(ans,l);

    printf("\nPostflix Result : %d",val);

    

    return 0;
}