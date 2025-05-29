#include <stdio.h>

int reverse(int num){
    int rev = 0;

    while(num > 0){
        //mutliply the last calculated rev by 10,
        //followed by adding last digit
        rev = rev * 10;
        rev += (num % 10);
        //remove the last digit
        num = num/10;
    }
    return rev;
}

int main(){
    int num = 234567;
    
    printf("The reverse of num %d is %d", num, reverse(num));
    return 0;
}