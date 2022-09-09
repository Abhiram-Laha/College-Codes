#include<stdio.h>
#define SIZE 10

typedef struct stack
{
    int stack[SIZE];
    int top;
}stack;

stack s;

void push(int item){
    if(s.top==SIZE-1){
        printf("Stack Full !!");
    }
    else{
        s.top++;
        s.stack[s.top]=item;
    }
}

int pop(){
    if(s.top==-1){
        printf("Empty Stack!!");
    }
    else{
        int v=s.stack[s.top];
        s.top--;
        return v;
    }
}

void display(){
    printf("Stack : ");
    for(int i=s.top; i>=0; i--){
        printf("%d ",s.stack[i]);
    }
}



int main(){

    s.top=-1;
    
    int ch;
    printf("\tStack Operation\n");

    while(ch!=4){
        printf ("\n\n------------------------------------------\n");
        printf ("      1    -->    PUSH               \n");
        printf ("      2    -->    POP               \n");
        printf ("      3    -->    DISPLAY               \n");
        printf ("      4    -->    EXIT           \n");
        printf ("------------------------------------------\n");
 
        printf ("\nEnter your choice : ");
        scanf    ("%d", &ch);
        switch (ch)
        {
        case 1:
            int v;
            printf("\nEnter Element to Push : ");
            scanf("%d",&v);
            push(v);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting.....");
        }
    }

    return 0;
}
