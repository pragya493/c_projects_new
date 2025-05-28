//convert decimal to binary number using division and modulo

#include <stdio.h>
#define N 1000

int main(){
    int num = 47;
    int n = num;
    int i=0;

    //declare an array to store binary number
    int bin[N];

    while(n != 0){
        //lsb is stored at index0
        bin[i++] = n % 2;
        n = n / 2;
    }

    //print array in reverse order - starting with msb stored at last index
    for(int j=i-1; j>= 0; j--)
        printf("%d",bin[j]);

    return 0;
}