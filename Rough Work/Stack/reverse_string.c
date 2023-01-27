#include<stdio.h>
#include<string.h>

int top=-1;
char stack[50];

void push(char data,int n){

    if(!top!=n-1){
        top++;
        stack[top]=data;
    }

}

char pop(int n){
    if(top!=-1){
        char ans=stack[top];
        top--;
        return ans;
    }
}



void display(int n){
    while(top>-1){
        printf("%c",stack[top]);
        top--;
    }
}



int main(){
    char arr[50];
    printf("Enter a String : ");
    gets(arr);

    int n=strlen(arr);

    for(int i=0; i<n; i++){
        push(arr[i],n);
    }

    printf("\nReversed String : ");

    display(n);



    

    



    return 0;
}