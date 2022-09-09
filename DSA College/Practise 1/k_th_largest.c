#include<stdio.h>

void sort(int *arr,int n){
    for(int i=0; i<n; i++){

        int key=*(arr+i);
        int j=i-1;
        while(j>=0 && *(arr+j)>key){
            *(arr+j+1)=*(arr+j);
            j--;
        }
        *(arr+j+1)=key;
    }
    
}

int main(){

    int n;
    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Values : ");

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter k-th : ");
    scanf("%d",&k);

    sort(arr,n);


    printf("\nk-th Largest : %d",arr[n-k]);


    return 0;
}