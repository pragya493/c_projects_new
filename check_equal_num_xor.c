#include <stdio.h>

int main(){
    int num1 = 23;
    int num2 = 23;

    //xor of unequal numbers is 1 
    if(num1 ^ num2)
        printf("Numbers are not equal!\n");
    //xor of unequal numbers is 0
    else
        printf("Numbers are equal\n");

    return 0;
}