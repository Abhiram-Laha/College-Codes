#include<iostream>
#include<stack>
using namespace std;


void prt(int arr[],int n){
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}
 
int main(){

    stack<int> st;

    int arr[8]={3,10,5,1,15,10,7,6};

    int n=8;
    int arr1[n];

    for(int i=n-1,j=0; i>=0; i--,j++){

        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }

        if(st.empty()){
            arr1[j]=-1;
        }
        else{
            arr1[j]=st.top();
        }


        st.push(arr[i]);
    }

    cout<<"Next Smaller Element : ";
    prt(arr1,n);

return 0;
}