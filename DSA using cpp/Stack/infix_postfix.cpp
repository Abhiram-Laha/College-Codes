#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

int pred(char ch){
    switch(ch){
        case '^':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
    }
    return -1;
}

int isOperator(char ch){
    if(ch=='^' || ch=='*' || ch=='/' || ch=='-' || ch=='+'){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    stack<char> infix;

    string str;
    cout<<"Enter Infix Expression : ";
    cin>>str;

    stack<char> post;

    int i=0;
    for(i=0; i<str.length(); i++){

        char el=str[i];

        if(el=='('){
            infix.push(el);
        }

        else if(el==')'){
            while(infix.top()!='('){
                char v=infix.top();
                post.push(v);
                infix.pop();
            }
            infix.pop();
        }

        else if(isOperator(el)){

            if(!infix.empty()){

                while(pred(el)<=pred(infix.top())){
                    char v=infix.top();
                    post.push(v);
                    infix.pop();
                }
            }
            else{
                infix.push(el);
            }
        }
        else{
            post.push(el);
        }
    }

    if(!infix.empty()){
        while(!infix.empty()){
            char v=infix.top();
            post.push(v);
            infix.pop();
        }
    }


   cout<<post.top();
   post.pop();
   cout<<post.top();
    

    return 0;
}