#include<stdio.h>



int binary_itr(int arr[],int size,int item){
    int low,high,mid;
    low=0;
    high=size-1;
    
    while(low<high){
        mid=(low+high)/2;

        if(arr[mid]==item){
            return mid;
        }
        else if(item>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }

    return 0;
}



int binary_rec(int arr[],int item,int low,int high){
    int mid;

    if(low<high){
        mid=(low+high)/2;
        if(item==arr[mid]){
            return mid;
        }
        else if(item>arr[mid]){
            return binary_rec(arr,item,mid+1,high);
        }
        else{
            return binary_rec(arr,item,low,mid-1);
        }
    }
    else{
        return 0;
    }
    
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int v;


    // USING ITERATIVE METHOD
    /*

    if(v=binary_itr(arr,7,10)){
        printf("Found at %d",v);
    }
    else{
        printf("Not present.");
    }
*/

    // USING RECURSIVE METHOD

    int low,high,size;
    size=7;
    low=0;
    high=size-1;

    if(v=binary_rec(arr,7,low,high)){
        printf("Found at %d",v);
    }
    else{
        printf("Not present.");
    }



    return 0;
}