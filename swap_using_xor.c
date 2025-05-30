#include <stdio.h>

int main(){
    //x   = 1101
    //y   = 0110
    //x^y = 1011

    int x = 20, y = 50;
    printf("Prev x is %d, Prev y is %d\n",x, y);

    x = x ^ y; //x has the xor result now
    y = x ^ y; //y has value of previous x now
    x = x ^ y; //x has previous y now

    printf("New x is %d, New y is %d",x, y);

    return 0;

}