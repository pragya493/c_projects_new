//Given an integer array of coins[] of size n representing different types of 
//denominations and an integer sum, the task is to count all combinations of coins 
//to make a given value sum.  

//Note: Assume that you have an infinite supply of each type of coin. 

#include <stdio.h>

int f(int coins[], int ind, int k){

    //base case
    if(k == 0)
        return 1;

    if(k < 0 || ind == 0)
        return 0;

    return f(coins, ind, k - coins[ind-1])
            + f(coins, ind-1, k);


}

int main(){
    int coins[] = {1, 2, 3};
    int target_amt = 4;
    int n = sizeof(coins)/sizeof(coins[0]);

    printf("total ways: %d",f(coins, n, target_amt));
    return 0;
}

/*
total ways: 5
*/