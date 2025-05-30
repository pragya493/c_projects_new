#include <stdio.h>
#include <math.h>

int main(){
    long long num = 484;

    if(ceil((double)sqrt(num)) == floor((double)sqrt(num)))
        printf("%lld is a perfect square\n",num);
    else
        printf("%lld is not a perfect square\n",num);

    return 0;
}