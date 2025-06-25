#include <stdio.h>

int binary_srch(int* arr, int low, int high, int x){

    while(low <= high){
        //to prevent overflow
        int mid = low + (high-low)/2;

        //base case
        if(arr[mid] == x)
            return mid;

        if(x > arr[mid])
            return binary_srch(arr, mid+1, high, x);
        else
            return binary_srch(arr, low, mid-1, x);

    }
    return -1;
}

int main(){
    int arr[] = { 2, 3, 4, 10, 40 };
    int len = sizeof(arr)/sizeof(arr[0]);

    int x = 10;

    if(binary_srch(arr, 0, len-1, x))
        printf("%d element is at index %d\n",x,binary_srch(arr, 0, len-1, x));
    else
        printf("Element %d not found!\n",x);

    return 0;
}