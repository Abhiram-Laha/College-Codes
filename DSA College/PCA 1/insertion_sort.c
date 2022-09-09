#include<stdio.h>

void insert_sort(int arr[],int n){

    int j,key;
    for(int i=1; i<n; i++){
        j=i-1;
        key=arr[i];

        while(key<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void prt(int *a,int n){
    for(int i=0; i<n; i++){
        printf("%d ",*(a+i));
    }
}

int main(){
    int arr[5]={3,5,1,2,7};
    int n=5;

    printf("Array before Sorting : ");
    prt(arr,n);

    insert_sort(arr,n);        //Selection Sort Calling

    printf("\n\nArray after Sorting : ");
    prt(arr,n);

    return 0;
}