#include<stdio.h>

void delete(int *arr,int n,int index){

    for(int i=index-1; i<n-1; i++){
        *(arr+i)=*(arr+i+1);
    }

}

void prt(int *arr,int n){
    for(int i=0; i<n; i++){
        printf("%d ",*(arr+i));
    }
}

int main(){

    int arr[8]={1,2,3,4,5,6,7,8};
    int n=8;

    printf("Current Array : ");
    prt(arr,8);

    int index;
    printf("\n\nEnter Position : ");
    scanf("%d",&index);

    delete(arr,8,index);

    printf("Array After Deletion: ");
    prt(arr,n-1);



    return 0;
}