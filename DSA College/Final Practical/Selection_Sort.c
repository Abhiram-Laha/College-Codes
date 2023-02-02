#include<stdio.h>

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

void print(int arr[],int size){
    for (int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}

void selection_sort(int arr[],int n){
    int min,i,j;
    int k=0;

    for(int i=0; i<n; i++){
        min=i;
        for(j=i+1; j<n; j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        printf("\nStep %d : ",++k);
        print(arr,n);
        swap(&arr[min],&arr[i]);
    }
}



int main(){
    int arr[5]={5,4,3,2,1};

    selection_sort(arr,5);

    //print(arr,5);

    
}