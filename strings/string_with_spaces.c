#include <stdio.h>
#define N 50

int main(){
    char str1[N];

    printf("enter the string: ");
    //To read string separated by spaces 
    fgets(str1, N, stdin);

    printf("string with space: ");
    puts(str1);

    char addr[N];
    printf("Enter the addr: ");
    scanf("%[^\n]s",addr);
    printf("The address is %s",addr);

    return 0;
}
