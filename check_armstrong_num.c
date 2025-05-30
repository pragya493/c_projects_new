//extract each digit of the number and 
//raise them to the power of the total number of digits and find their sum.

#include <stdio.h>
#include <math.h>

int check_armstrong(int num){
    double sum = 0;
    int exp = log10(num) + 1;

    while(num > 0){
        //The pow() function works with double type numbers.
        double base = (double)(num%10);
        sum += pow(base,exp);
        num = num/10;
    }
    return sum;
}

int main(){
    int num = 153;

    int res= check_armstrong(num);
    printf("res is %d\n",res);
    if(num == res)
        printf("Num %d is armstrong number\n",num);
    else
        printf("Num %d is not an armstrong number\n",num);

    return 0;
}