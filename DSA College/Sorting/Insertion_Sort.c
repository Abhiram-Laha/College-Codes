#include<stdio.h>


void insertion_sort(int arr[],int size){
    int current,j;

    for(int i=1; i<size; i++){
        current=arr[i];
        j=i-1;

        while(current<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=current;
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

    insertion_sort(arr,size);

    printf("\nAfter Insertion Sort : ");
    print_array(arr,size);

   
    return 0;
}