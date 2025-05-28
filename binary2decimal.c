#include <stdio.h>

int main(){
    long long int num = 10100011011;
    long long int n = num;

    int multiplier = 1;
    int sum = 0;

    while(n != 0){
        sum += (n % 10) * multiplier;
        multiplier *=2;
        n = n/10;
    }
    printf("Decimal of binary number %lld is %d",num,sum);
    return 0;

}