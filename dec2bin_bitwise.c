#include <stdio.h>
#define N 1000

int main(){
    int num = 8;
    int bin[N];
    int i=0;

    while(num > 0){
        //extract lsb
        bin[i++] = num & 1;
        //right shift 'num by 1' is num/2
        num = num >> 1;
    }

    //print array in reverse order - starting with msb stored at last index
    for(int j=i-1; j>= 0; j--)
        printf("%d",bin[j]);

    return 0;
}