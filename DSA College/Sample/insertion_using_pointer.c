#include<stdio.h>

void insert(int *arr,int n){
    int i;
    for(i=1; i<n; i++){

        int key=*(arr+i);
        int j=i-1;
        while(j>=0 && *(arr+j)>key){
            *(arr+j+1)=*(arr+j);
            j--;
        }
        *(arr+j+1)=key;
    }
}


void prt(int *a,int n){
    for(int i=0; i<n; i++){
        printf("%d ",*(a+i));
    }
}

int main(){
    int n;
    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter Values : ");
    for(int i=0; i<n; i++){
        scanf("%d",(arr+i));
    }

    insert(arr,n);

    printf("Sorted Array : ");
    prt(arr,n);



return 0;
}
