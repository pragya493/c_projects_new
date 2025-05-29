#include <stdio.h>

int lcm(int num1, int num2, int max){
    while(1){
        if(max % num1 == 0 && max % num2 == 0)
            break;
        max++;
    }
    return max;
}

int gcd(int num1, int num2, int min){
    while(min > 0){
        if(num1 % min == 0 && num2 % min == 0)
            break;
        min--;
    }
    return min;
}


int main(){
    int num1 = 9;
    int num2 = 6;

    int max = (num1 > num2) ? num1 : num2;
    int min = (num1 < num2) ? num1 : num2;

    printf("lcm of %d and %d is %d\n",num1, num2, lcm(num1, num2, max));
    printf("gcd of %d and %d is %d\n",num1, num2, gcd(num1, num2, min));

    return 0;
}