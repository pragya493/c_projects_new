//The pow() function works with double type numbers. 
//If you have integers, you can explicitly convert them to double using type casting.

#include <stdio.h>
#include <math.h>

int main(){
    double base = 5, exponent = 2;

    double result = 1.0;
    if(exponent == 0)
        result = 1.0;
    else
        result = pow(base, exponent);

    printf("The power %.2lf of base %.2lf is %.2lf\n",exponent,base,result);

    return 0;
}