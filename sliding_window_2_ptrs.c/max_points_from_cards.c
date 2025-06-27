#include <stdio.h>

int max(int a, int b){
    return a > b ? a : b;
}

int f(int* arr, int n, int k){
    int lsum=0, rsum=0, max_sum=0;

    for(int i=0; i<k; i++){
        lsum += arr[i];
        max_sum = lsum;
    }

    int right_ind = n-1;
    for(int i=k-1; i >0; i--){
        lsum -= arr[i];
        rsum += arr[right_ind--];

        max_sum = max(max_sum, lsum + rsum);
    }
    return max_sum;
}

int main(){
    int arr[] = {6, 2, 3, 4, 7, 2, 1, 7, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    //window size
    int k = 4;

    printf("The max points obtained from cards %d",f(arr, len, k));
    return 0;
}

/*
The max points obtained from cards 16
*/