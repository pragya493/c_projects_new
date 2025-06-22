//The climbing stairs problem involves finding the number of distinct ways 
//to climb to the top of a staircase with n steps, 
//given that you can climb either 1 or 2  or 3 steps at a time. 

#include <stdio.h>
#include <limits.h>

int max(int a, int b){
        return (a > b ? a: b);
}

int f(int target_steps){

    if(target_steps == 0 || target_steps == 1)
        return 1;

    if(target_steps < 1)
        return 0;

    //take
    return (target_steps-1) + f(target_steps-2) + f(target_steps-3);
}

int main(){
    int target_steps = 3;
    
    printf("total number of climbing stairs: %d\n",f(target_steps));

    return 0;
}

/*
total number of climbing stairs: 4
*/