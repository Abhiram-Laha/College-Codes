#include <iostream>
#include <cmath>
using namespace std;
 
void palindrome(int arr[], int n)
{
    int flag = 0;
 
    for (int i = 0; i <= n / 2 && n != 0; i++) {
 
    
        if (arr[i] != arr[n - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "false";
    else
        cout << "true";
}

 

int main()
{
    int a[10], n, i,j;       
    //cin>>n;
    n=9;    

    for(i=2; i<=n-2; i++){
        int temp=n;
        for(j=0; temp>0; j++){
            a[j]=temp%i;
            temp=temp/2;
        }

        for(int m=j-1; m>=0; m--){
            cout<<a[m];
        }
        cout<<endl;

        palindrome(a,temp);
    }


}  

