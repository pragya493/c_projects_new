//Longest Increasing Subsequence (LIS)
//involves finding the longest subsequence in a given 
//array such that all elements of the subsequence are sorted in increasing order

#include <stdio.h>

int max(int a, int b){
    return a > b ? a : b;
}

int lis(int* arr, int len, int prev, int cur){
    //base case
    if(cur == len)
        return 0;

    //take case
    int take = 0;
    if((arr[prev] < arr[cur]) || prev == -1)
        take = 1 + lis(arr, len, prev+1, cur+1);

    //not take case
    return max(take, lis(arr, len, prev, cur+1));
}

int main(){
    int arr[] = {2, 4, -1, 0, 1, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("The length of longest increasing subsequence is %d",lis(arr, n, -1, 0));

    return 0;
}

/*
The length of longest increasing subsequence is 3
*/