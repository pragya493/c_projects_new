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
    int num = 12321;
    
    int rev = reverse(num);
    printf("The reverse of num %d is %d\n", num, rev);

    //Palindrome numbers are those numbers that remain the same 
    //even after reversing the order of their digits
    if(num == rev)
        printf("The no. %d is a palindrome\n",num);
    else
        printf("The no. %d is not a palindrome\n",num);

    return 0;
}