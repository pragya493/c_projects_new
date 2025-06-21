//susbet sum to K
//Given an array of n integers and an integer K, 
//determine whether there exists a subset of the array whose sum is exactly K.

#include <stdio.h>
#include <stdbool.h>

bool subsetSumtoK(int* arr, int n, int target, int i){
    //base case
    if(target == 0)
        return 1;
    if(i == 0)
        return (arr[0] == target);

    //take case
    bool take = false;
    if(arr[i] <= target)
        take = subsetSumtoK(arr, n, target-arr[i], i-1);

    //not take case
    return take || (subsetSumtoK(arr, n, target, i-1));

}

int main(){
    int arr[] = {1, 2, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 7;

    bool res = subsetSumtoK(arr, n, target, n-1);

    printf("subset sum to target is possible: %s", res ? "true" : "false");
    return 0;
}

/*
subset sum to target is possible: true
*/