#include<stdio.h>

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}


void bubble(int arr[],int n){
    int flag;
    for(int i=0; i<n-1; i++){
        flag=0;
        for(int j=0; j<n-i; j++){
            if(arr[j+1]<arr[j]){
                flag=1;
                swap(&arr[j+1],&arr[j]);
            }
        }
        if(flag==0){
            break;
        }
    }
}

void prt(int *a,int n){
    for(int i=0; i<n; i++){
        printf("%d ",*(a+i));
    }
}

int main(){
    int arr[10]={2,6,3,1,4,8,6,1,7,5};
    int n=10;

    printf("Array before Sorting : ");
    prt(arr,n);

    bubble(arr,n);        //Bubble Sort Calling

    printf("\n\nArray after Sorting : ");
    prt(arr,n);

    return 0;
}