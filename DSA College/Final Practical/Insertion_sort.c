#include<stdio.h>

void print(int arr[],int size){
    for (int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}

void insertion_sort(int arr[],int n){
    int key;
    int i,j;
    int k=0;

    for(int i=1; i<n; i++){
        key=arr[i];
        j=i-1;

        while(key<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

        printf("\nStep %d : ",++k);
        print(arr,n);
    }
}


int main(){
    int arr[5]={5,4,3,2,1};

    insertion_sort(arr,5);

    
}