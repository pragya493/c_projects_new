//bubble sort

#include <stdio.h>

void swap(int* arr, int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void bubble_sort(int* arr, int len){
    
    //compare the ele in bubble
    //swap the ele in bubble if reqd. - max would be at last(sorted)
    //move the bubble to right

    for(int i=len-1; i >=0; i--){
        for(int j=0; j<i; j++){
            if(arr[j+1] < arr[j]){
                swap(arr, j, j+1);
            }
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

    bubble_sort(arr, len);

    printf("The sorted array is:   ");
    print_arr(arr, len);

    return 0;
}

/*
The unsorted array is: 13 46 24 52 20 9 
The sorted array is:   9 13 20 24 46 52
*/