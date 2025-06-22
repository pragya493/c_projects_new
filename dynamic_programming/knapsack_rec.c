//Given n items where each item has some weight and profit associated with it and 
//also given a bag with capacity W. 
//The task is to put the items into the bag such that the sum of profits associated 
//with them is the maximum possible. 


#include <stdio.h>

int max(int a, int b){
    return (a > b ? a : b);
}

int f(int* weight, int* profit, int bag_cap, int ind){

    //base case
    if(ind == 0 || bag_cap == 0){
        return 0;
    }

    int take=0;
    if(weight[ind] <= bag_cap)
        take = profit[ind-1] + f(weight, profit, bag_cap - weight[ind-1], ind-1);
    
    return max(take, 
            f(weight, profit, bag_cap, ind-1));

}


int main(){
    int bag_cap = 4;
    int profit[] = {1, 2, 3};
    int weight[] = {4, 5, 3};
    int n = sizeof(weight)/sizeof(weight[0]);

    int max_profit = f(weight, profit, bag_cap, n);
    printf("max profit: %d\n", max_profit);

    return 0;
}

/*
max profit: 3
*/