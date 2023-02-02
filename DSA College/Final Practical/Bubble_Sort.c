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

void bubble_sort(int arr[],int size){
    int flag=0;
    for(int i=0; i<size; i++){
        flag=0;
        for(int j=0; j<size-1; j++){
            if(arr[j]>arr[j+1]){
                flag=1;
                
                swap(&arr[j],&arr[j+1]);
            }
        }
        print(arr,size);
        printf("\n");
        if(flag==0){
            break;
        }
    }
}


int main(){
    int arr[5]={5,4,3,2,1};

    bubble_sort(arr,5);

    
}
