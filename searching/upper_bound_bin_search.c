#include <stdio.h>

int upper_bound(int* arr, int low, int high, int x){
    int res = high+1;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] > x){
            res = mid;
            high = mid-1;
        }
        else
            low = mid+1;
    }
    return res;
}


int main(){
    int arr[] = {1, 2, 3, 3, 5, 7, 7, 7, 11};
    int len = sizeof(arr)/sizeof(arr[0]);

    int x = 7;
    printf("The upper bound of %d in the arr is at index %d\n",x,upper_bound(arr, 0, len-1, x));

    return 0;
}