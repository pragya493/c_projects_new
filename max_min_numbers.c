#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1 = 23;
    int num2 = 30;

    int max = (num1 + num2 + abs(num1 - num2))/2;
    int min = (num1 + num2 - abs(num1 - num2))/2;

    printf("Max num is %d and min num is %d\n",max,min);

    return 0;
}