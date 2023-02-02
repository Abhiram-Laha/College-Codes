#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

// ! MAIN PARTITION CODE

int par(int arr[],int start,int end){

    int i=start-1;
    int j=start;
    int pivot = arr[end];

    for(j=start; j<=end; j++){
        
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[end]);
    return i+1;
}


void quick_sort(int arr[],int start,int end){
    if (start < end)
    {
        int pivot = par(arr, start, end);
        quick_sort(arr, start, pivot - 1);
        quick_sort(arr, pivot + 1, end);
    }
}




int main(){
    int arr[5]={5,1,2,7,9};

    quick_sort(arr,0,4);

    for(int i=0; i<=4; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}

