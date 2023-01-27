#include<stdio.h>

int Binary_Search(int arr[],int start,int end,int element){
    end=end-1;
    while(start<=end){

        int mid=(start+end)/2;

        if(arr[mid]==element){
            return mid;
        }
        else if(element>arr[mid]){
            return Binary_Search(arr,mid+1,end,element);
        }
        else{
            return Binary_Search(arr,start,mid-1,element);
        }
    }

    return 0;
}


int main(){
    int arr[10]={5,1,7,2,9,7,2,9,8,5};

    if(Binary_Search(arr,0,10,9)){
        printf("Present");
    }
    else{
        printf("Not Present.");
    }

    return 0;
}