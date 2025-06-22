//insertion sort

#include <stdio.h>

void swap(int* arr, int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void insertion_sort(int* arr, int len){
    
    //assume first ele at correct loc.
    //move to next ele and compare with ele in left
    //place it at its correct loc

    for(int i=1; i<len; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr, j, j-1);
            j--;
        }
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

    insertion_sort(arr, len);

    printf("The sorted array is:   ");
    print_arr(arr, len);

    return 0;
}

/*
The unsorted array is: 13 46 24 52 20 9 
The sorted array is:   9 13 20 24 46 52
*/