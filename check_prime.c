#include <stdio.h>

int main(){
    int num = 0, flag=0;

    //0 and 1 are not prime numbers
    if(num == 0 || num == 1)
        flag = 1;

    else{
        for(int i = 2; i<=num/2; i++){
            if(num % i == 0){
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0)
        printf("%d is a prime number\n",num);

    else
        printf("%d is not a prime number\n",num);

    return 0;
}