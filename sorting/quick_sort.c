//quick sort

//pick the pivot - say first element of arr
//place smaller elements on left of pivot
//place larger elements on right of pivot

#include <stdio.h>

int partition(int* arr, int low, int high){
    int pivot = low;
    int i= low, j= high;
    while(i<j){
        while(arr[i] < arr[pivot] && i<= high)
            i++;
        while(arr[j] > arr[pivot] && j>=low)
            j--;
        if(i < j)
            swap(arr, i, j);
    }
    swap(arr, j, pivot);
    return pivot;

}

void quick_sort(int* arr, int low, int high){
    
    if(low < high){
        int part_idx = partition(arr, low, high);
        quick_sort(arr, low, part_idx-1);
        quick_sort(arr, part_idx+1, high);
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

    quick_sort(arr, 0, len-1);

    printf("The sorted array is:   ");
    print_arr(arr, len);

    return 0;
}

/*
The unsorted array is: 13 46 24 52 20 9 
The sorted array is:   9 13 20 24 46 52
*/