#include <stdio.h>

int main(){
    int num = -10;

    if(num == 0)
        printf("%d is zero\n",num);

    //extract msb
    // 1byte = 8bits, say int size=4, 
    //need to shift left num by (4*8 -1) or 31 bits)

    int msb = (num >> (sizeof(int)*8 - 1)) & 1;

    if(msb)
        printf("%d is a negative num\n",num);
    else
        printf("%d is a positive num\n",num);

    return 0;
}