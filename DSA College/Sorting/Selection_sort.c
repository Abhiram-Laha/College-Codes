#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}


void selection_sort(int arr[],int size){
    int min;
    
    for(int i=0; i<size; i++){
        min=i;

        for(int j=i+1; j<size; j++){

            if(arr[min]>arr[j]){
                min=j;
            }

            swap(&arr[min],&arr[i]);
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

    selection_sort(arr,size);

    printf("\nAfter Selection Sort : ");
    print_array(arr,size);

   
    return 0;
}