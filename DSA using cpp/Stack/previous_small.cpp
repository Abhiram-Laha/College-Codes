#include<iostream>
#include<stack>
using namespace std;



int main(){

    int arr[5]={2,5,6,3,1};
    int n=5;
    
    stack<int> st;

    for(int i=0; i<n; i++){

        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }

        if(st.empty()){
            cout<<-1<<" ";
        }
        else{
            cout<<st.top()<<" ";
        }

        st.push(arr[i]);
    }

    

    return 0;
}