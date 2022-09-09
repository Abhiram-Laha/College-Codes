#include<stdio.h>


int binary(int *arr,int n,int e){
    int mid,l=0,u=n;

    while(l<=u){
        mid=(l+u)/2;

        if(*(arr+mid)==e){
            return mid;
            break;
        }
        else if(*(arr+mid)>e){
            u=mid-1;
        }
        else if(*(arr+mid)<e){
            l=mid+1;
        }
    }
    return 0;
}



void bubble(int *arr,int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(*(arr+j)>*(arr+j+1)){
                int temp=*(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
    }
}

void prt(int *arr,int n){
    for(int i=0; i<n; i++){
        printf("%d ",*(arr+i));
    }
}

int main(){

    int n,v,e;
    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter Values : ");
    for(int i=0; i<n; i++){
        scanf("%d",(arr+i));
    }

    printf("\nEnter Element You Want to Search : ");
    scanf("%d",&e);

    bubble(arr,5);



    printf("\nSorted Array: ");
    prt(arr,n);



    if(v=binary(arr,n,e)){
        printf("\n\nElement Found at : %d",v+1);
    }
    else{
        printf("\n\nElement Not Found!!");
    }


return 0;
}

