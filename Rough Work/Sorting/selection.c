#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void selection_sort(int arr[],int n){
    for(int i=0; i<n; i++){
        int min=i;

        for(int j=i+1; j<n; j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }

        swap(&arr[i],&arr[min]);
    }
}



int main()
{

    int list[8] = {8, 7, 6, 4, 5, 3, 1, 2};
    int n = 8;

    selection_sort(list,n);

    printf("Sorted Array : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }

    return 0;
}