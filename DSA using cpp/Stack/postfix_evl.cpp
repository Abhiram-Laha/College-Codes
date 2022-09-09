#include<iostream>
#include<stack>
#include<cmath>
#include <climits>
using namespace std;

//Function

int operation(int x,int y, char opr){
    if(opr=='+'){
        return x+y;
    }
    else if(opr=='-'){
        return x-y;
    }
    else if(opr=='*'){
        return x*y;
    }
    else if(opr=='/'){
        return x/y;
    }
    else if(opr=='^'){
        return pow(x,y);
    }
   else{
        return INT_MIN;
   }
}

int main(){
    string postfix;
    cout<<"Enter Postfix Expression : ";
    cin>>postfix;

    postfix+='#';
    stack<int> st;

    int i=0;
    char item,opr;
    int x,y,val;

    while(postfix[i]!='#'){
        item=postfix[i];
        
        if(item<='9' && item>='0'){
            st.push(item-'0');
        }
        else{
            opr=item;

            x=st.top();
            st.pop();

            y=st.top();
            st.pop();

            val=operation(y,x,opr);
            
            st.push(val);

        }   
        i++;
    } 

    cout<<"\nValue : "<<st.top();

return 0;
}