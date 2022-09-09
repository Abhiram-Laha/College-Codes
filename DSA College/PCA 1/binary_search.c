#include<stdio.h>

int binary(int arr[],int n,int item){
    int u,l,mid;
    u=n-1;
    l=0;

    while(l<=u){
        mid=(u+l)/2;
        if(arr[mid]==item){
            return mid;
        }

        else if(arr[mid]>item){
            u=mid-1;
        }

        else{
            l=mid+1;
        }
    }

    return -1;
}

int main(){

    int arr[6]={3,1,5,6,7,9};

    printf("%d ",binary(arr,6,7)+1);

    return 0;
}