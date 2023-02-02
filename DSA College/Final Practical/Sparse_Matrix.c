#include<stdio.h>

typedef struct tuple{
    int row;
    int col;
    int value;
}tuple;

int main(){
    tuple t[10];
    int matrix[3][3];
    int row=3;
    int col=3;

    int non_zero=0;

    printf("Enter Values : \n");

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&matrix[i][j]);

            if(matrix[i][j]!=0){
                non_zero++;

                t[non_zero].row=i;
                t[non_zero].col=j;
                t[non_zero].value=matrix[i][j];
            }
        }
    }

    

    
    

    if(non_zero>(row*col)/2){
        printf("Not Sparse");
    }
    else{
        printf("Sparse\n");

        //! 3-Tuple Format

        printf("i j value\n");
        for(int i=1; i<non_zero; i++){
            printf("%d %d %d\n",t[i].row, t[i].col, t[i].value);
        }
    }

}