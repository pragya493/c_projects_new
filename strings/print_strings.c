#include <stdio.h>
#define N 50

int main(){

    char str1[] = "Coding";
    printf("%s\n",str1);

    char str2[5] = "Cool";
    printf("%s\n",str2);

    char str3[5] = {'L', 'i', 'f', 'e', '\0'};
    printf("%s\n",str3);

    char str4[] = {'B', 'e', 's', 't', '\0'};
    printf("%s\n",str4);

    char str5[50];
    printf("enter the string\n");
    //read string without spaces
    scanf("%s",str5);
    printf("string without space: %s\n",str5);

    return 0;

}