#include <stdio.h>

int rev_arr(int arr[], int n){
    for(int i =0, j= n-1; i < j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int len = sizeof(arr)/sizeof(arr[0]);

    rev_arr(arr, len);
    for(int i=0; i<len; i++)
        printf("%d ",arr[i]);

    return 0;
}