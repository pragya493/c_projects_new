#include <stdio.h>
#define N 50

char* string_copy(char* src, char*  dest){
    if(dest == NULL)
        return NULL;

    char* dest_ptr = dest;

    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';

    return dest_ptr;
}

int main(){
    char src[] = "copy my string";
    char dest[N];

    printf("%s\n",src);
    char* destination = string_copy(src,dest);
    printf("%s\n",destination);

    return 0;
}