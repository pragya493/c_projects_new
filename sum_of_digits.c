#include <stdio.h>

//keep on summing the digits till we get single digit sum

//use divisibilty rule of 9
int sum_digits(int num){
    int sum = 0;

    //if number is perfectly divisible by 9 then sum is also 9
    //eg. 189
    if(num % 9 == 0)
        sum = 9;
    //else the remainder would be sum eg. 29 % 9 =2
    else
        sum = num %9;

    return sum;
}

int main(){
    int num = 12345;

    int sum = sum_digits(num);
    printf("The sum of digits in %d is %d\n",num, sum);

    return 0;
}