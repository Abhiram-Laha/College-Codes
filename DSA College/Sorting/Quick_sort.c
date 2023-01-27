#include<stdio.h>

void swap(int *arr,int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp; 

}

int partation(int arr[],int start,int end){

    int i=start-1;
    int j=start;

    int pivot=arr[end];

    for(j=start; j<=end; j++){

        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }

    }

    swap(arr,i+1,end);

    return i+1;

}


void quick_sort(int arr[],int start,int end){

    if(start<end){
        int pivot = partation(arr,start,end);

        quick_sort(arr,start,pivot-1);
        quick_sort(arr,pivot+1,end);
    }
}



void print_array(int arr[],int size){
    printf("\nArray : ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}


int main(){
    
    int arr[]={1,9,3,6,4,5,6};
    int size=7;

    print_array(arr,size);

    quick_sort(arr,0,size-1);

    printf("\nAfter Quick Sort : ");
    print_array(arr,size);

   
    return 0;
}