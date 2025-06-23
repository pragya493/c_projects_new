//bmerge sort

#include <stdio.h>
#define N 50


int merge(int* arr, int low, int mid, int high){
    int i = low, j=mid+1, k=low;
    int b_arr[N];
    while(i <= mid && j <=high){
        if(arr[i] < arr[j]){
            b_arr[k++] = arr[i++];
        }
        else{
            b_arr[k++] = arr[j++];
        }
    }
    while(i <= mid){
        b_arr[k++] = arr[i++];
    }
    while(j <= high){
        b_arr[k++] = arr[j++];
    }
    for(int i=low; i<=high; i++){
        arr[i] = b_arr[i];
    }
}

void merge_sort(int* arr, int low, int high){
    if(low < high){
        int mid = (low + high)/2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

void print_arr(int* arr, int len){
    for(int i=0; i<len; i++)
        printf("%d ",arr[i]);
    printf("\n");
}

int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    int len = sizeof(arr)/sizeof(arr[0]);

    printf("The unsorted array is: ");
    print_arr(arr, len);

    merge_sort(arr, 0, len-1);

    printf("The sorted array is:   ");
    print_arr(arr, len);

    return 0;
}

/*
The unsorted array is: 13 46 24 52 20 9 
The sorted array is:   9 13 20 24 46 52
*/