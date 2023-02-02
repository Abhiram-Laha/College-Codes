#include<stdio.h>

void merge(int arr[],int start,int mid,int end){
    int i=start;
    int j=mid+1;

    int x=start;
    int new_arr[end+1];
    //! COMPARSION
    while(i<=mid && j<=end){

        if(arr[i]<arr[j]){
            new_arr[x] = arr[i];
            i++;
            x++;
        }
        else{
            new_arr[x]=arr[j];
            j++;
            x++;
        }
    }
    //! REMAINING
    while(i<=mid){
        new_arr[x]=arr[i];
        i++;
        x++;
    }
    while(j<=mid){
        new_arr[x]=arr[j];
        j++;
        x++;
    }
    //! COPYING
    for(int i=start; i<=end; i++){
        arr[i]=new_arr[i];
    }
}



void merge_sort(int arr[],int start,int end){
    if(start<end){
        int mid = (start+end)/2;

        merge_sort(arr,start,mid);
        merge_sort(arr,mid+1,end);

        merge(arr,start,mid,end);
    }
}





int main(){
    int arr[3]={3,2,1};
    merge_sort(arr,0,2);

    for(int i=0; i<3; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}