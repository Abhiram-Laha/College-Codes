#include<stdio.h>

int binary_search(int arr[],int start,int end,int data){
    int mid=(start+end)/2;

    while(start<end){
        if(arr[mid]==data){
            return mid;
        }
        else if(data>arr[mid]){
            return binary_search(arr,mid+1,end,data);
        }
        else{
            return binary_search(arr,start,mid,data);
        }
    }
    return 0;
}

int main(){
    int arr[5]={1,2,3,4,5};

    printf("%d",binary_search(arr,0,4,7));
}