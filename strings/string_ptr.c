#include <stdio.h>

int main(){

    //when use double quotes, compiler automatically add '\0'
    char name[] = "Pragya Rocks";
    char *ptr = name;

    while(*ptr != '\0')
        printf("%c",*ptr++);

    printf("\n");
    char name1[] = {'P', 'r', 'a', 'g', 's', '\0'};

    printf("name: %s\n", name1);

    return 0;
}