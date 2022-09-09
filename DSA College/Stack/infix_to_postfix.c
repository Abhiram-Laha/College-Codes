#include<stdio.h>
#include<string.h>

int infix_top=-1,postfix_top=-1;
char infix[20],postfix[20];

//Function of Stack Operation

void PUSH_infix(char x){
    if(infix_top!=20-1){
        infix_top++;
        infix[infix_top]=x;
    }
}

char POP(){
    if(infix_top!=-1){
        int v=infix[infix_top];
        infix_top--;
        return v;
    }
}

char PEEK(){
    char c;
    if(infix_top!=-1){
        c=infix[infix_top];
    }
    return c;
}

//To Push element in POSTFIX Stack

void PUSH_postfix(char x){
    if(postfix_top!=20-1){
        postfix_top++;
        postfix[postfix_top]=x;
    }
}


void display_postfix(){
    if(postfix_top!=-1){
        for(int i=0; i<=postfix_top; i++){
            printf("%c",postfix[i]);
        }
    }
}


// Special Functions to check Precedence AND isOperator

int precendence(char e)
{
	switch(e)
	{
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

int isOperator(char ele){
    if(ele=='^' || ele=='*' || ele=='/' || ele=='+' || ele=='-'){
        return 1;
    }
    else{
        return 0;
    }
}




//Main Function

int main(){

    char str[20]={'\0'};
    printf("Enter Infix : ");
    gets(str);

    int i=0;
    char ele,pop_ele;

    while(str[i]!='\0'){

        ele=str[i];

        if(ele=='('){
            PUSH_infix(ele);
        }

        else if(ele==')'){

            while(PEEK()!='('){
                pop_ele=POP();
                PUSH_postfix(pop_ele);
            }
            POP();
        }

        else if(isOperator(ele)){
            if(infix_top>=0){
                while(precendence(ele)<=precendence(PEEK()) && infix_top!=-1){
                    pop_ele=POP();
                    PUSH_postfix(pop_ele);

                }

            }
            PUSH_infix(ele);
        }

        else{
            PUSH_postfix(ele);
        }




        i++;

    }

    if(infix_top!=-1){
        while(infix_top!=-1){
            pop_ele=POP();
            PUSH_postfix(pop_ele);
        }
    }

    printf("\nThe Postfix Expression : %s",postfix);
    return 0;

}


