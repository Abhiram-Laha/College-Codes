#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

void select_sort(int arr[],int n){
    int max;

    for(int i=0; i<n; i++){
        max=i;
        for(int j=i+1; j<n; j++){
            if(arr[max]<arr[j]){
                max=j;
            }
        }
        if(max==0){
            printf("\nArray is Already Sorted");
            exit(0);
        }
        swap(&arr[max],&arr[i]);
    }
}


void prt(int *a,int n){
    for(int i=0; i<n; i++){
        printf("%d ",*(a+i));
    }
}

int main(){
    int arr[5]={7,2,3,9,1};
    int n=5;

    printf("Array before Sorting : ");
    prt(arr,n);

    select_sort(arr,n);        //Selection Sort Calling

    printf("\n\nArray after Sorting : ");
    prt(arr,n);

    return 0;
}