//The "minimum partition difference" problem, specifically referring to 
//partitioning an array into two subsets with the minimum absolute difference 
//between their sums

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

int minimum(int a, int b){
    return (a < b ? a: b);
}

int f(int* arr, int i, int k){
    //subset sum to k is possible or not

    if(k == 0)
        return true;

    if(i == 0)
        return (arr[0] == k); 
    
    bool take = false;
    if(arr[i] <= k)
        take = f(arr, i-1, k-arr[i]);

    return take || (f(arr, i-1, k));
}

int min_partition(int* arr, int n){
    int target;
    for(int i=0; i<n; i++){
        target += arr[i];
    }

    int diff, min = INT_MAX;
    for(int i=0; i<= target; i++){
        bool sum1 = f(arr, n-1, i);
        if(sum1){
            diff = abs((target - i) - i);
            min = minimum(diff, min);
        }

    }
    return min;
}

int main(){
    int arr[] = {3, 3, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("The min difference between 2 subsets is %d\n",min_partition(arr, n));

    return 0;
}

//3 3 3 1
//Sum1 - 1 - 2 - 3 - 4 - 5 - 6 - 7 - 8 - 9 - 10
//       T - F - T - T - F - T - T - F - T - T
//Sum2   9 - 8 - 7 - 6 - 5 - 4 - 3 - 2 - 1 - 0
//diff   8 - - - 4 - 2 - - - 2 - 4 - - - 8 - 10