#include <stdio.h>
#include <string.h>
#include <ctype.h>

int sum_digit(char* str, int len){
    int sum = 0;
    for(int i=0; i<len; i++){
        if(isdigit(str[i]))
            sum += (str[i] - '0');
    }
    return sum; 
}

int sum_ascii(char str1[], int len){
    int sum = 0;
    for(int i=0; i<len; i++){
        if(str1[i] > 47 && str1[i] < 58)
            sum += (str1[i] - 48);
    }
    return sum;
}

int main(){
    char str1[] = "12AB,95, 1A";
    int len = strlen(str1);

    int sum1 = sum_ascii(str1, len);
    printf("Sum: %d\n",sum1);

    int sum2 = sum_digit(str1, len);
    printf("Sum: %d\n",sum2);

    return 0;
}