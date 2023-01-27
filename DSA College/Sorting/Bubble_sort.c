#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubble_sort(int arr[],int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){

            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
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

    bubble_sort(arr,size);

    printf("\nAfter Buuble Sort : ");
    print_array(arr,size);

   
    return 0;
}