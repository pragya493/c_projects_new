//Given a rod of length n inches and an array of len- n, price[], where price[i] denotes the value 
//of a piece of length i. Your task is to determine the maximum value obtainable by 
//cutting up the rod and selling the pieces.

#include <stdio.h>

int max(int a, int b){
        return (a > b ? a: b);
}

int f(int* price, int i, int target){

    //base case
    if(target == 0 || i == 0)
        return 0;
    
    //take case
    int take=0;
    if(i <= target)
        take = price[i-1] + f(price, i, target-i);

    //not take case
    return max(take, f(price, i-1, target));

}


int main(){
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    //i = piece len = 1, 2, 3, 4, 5,  6,  7, 8
    //len of rod - n
    int n = sizeof(price)/sizeof(price[0]);

    int max_profit = f(price, n, n);
    printf("max_profit: %d\n",max_profit);

    return 0;
}

/*
max_profit: 22
*/