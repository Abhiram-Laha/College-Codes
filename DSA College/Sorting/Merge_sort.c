#include<stdio.h>


void merge(int arr[],int start,int mid,int end){
    int i,j,a;

    int ans[end+1];   

    i=start;
    j=mid+1;
    a=start;

    //? Compare and push in the array

    while(i<=mid && j<=end){

        if(arr[i]<arr[j]){
            ans[a]=arr[i];
            i++;
            a++;
        }

        else{
            ans[a]=arr[j];
            j++;
            a++;
        }
    }

    //? Remaing elements if present

    while(i<=mid){
        ans[a]=arr[i];
        i++;
        a++;
    }

    while(j<=end){
        ans[a]=arr[j];
        j++;
        a++;
    }

    //? Copying ans array to main array 

    for(int i=start; i<=end; i++){
        arr[i] = ans[i];
    }


}

// ! MAIN MERGE SORT

void merge_sort(int arr[],int start,int end){
    if(start<end){

        int mid = (start + end) / 2;

        // Divide into two parts

        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);

        // Merging the elements again

        merge(arr, start, mid, end);
    }
    
}





void print_array(int arr[],int size){
    printf("\nArray : ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}


int main(){
    
    int arr[]={1,9,3,6,4,5,6};
    int size=7;

    print_array(arr,size);

    merge_sort(arr,0,size-1);

    printf("\nAfter Merge Sort : ");
    print_array(arr,size);

   

    

    return 0;
}