//selection sort

#include <stdio.h>

void swap(int* arr, int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void selection_sort(int* arr, int len){
    
    //select element at index-i
    //find the min in arr from i to len-1
    //swap the min with element at i
    for(int i=0; i<len-1; i++){
        int min_id = i;
        for(int k=i+1; k<len; k++){
            if(arr[k] < arr[min_id])
                min_id = k;
        }
        swap(arr, i, min_id);
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

    selection_sort(arr, len);

    printf("The sorted array is:   ");
    print_arr(arr, len);

    return 0;
}

/*
The unsorted array is: 13 46 24 52 20 9 
The sorted array is:   9 13 20 24 46 52
*/