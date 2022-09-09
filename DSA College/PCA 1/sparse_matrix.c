#include<stdio.h>
#define max 50

int sparse(int matrix[][max],int m,int n){
    int count=0;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j]==0){
                count++;
            }
        }
    }

    if(count>(m*n)/2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int m,n;
    printf("Enter m & n : ");
    scanf("%d",&m);
    scanf("%d",&n);

    int arr[m][n];

    printf("Enter Values : \n");

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    if(sparse(arr,m,n)){
        printf("\nYes, it is Sparse Matrix.");
    }
    else{
        printf("\nNo, it is not a Sparse Matrix.");
    }


    return 0;
}