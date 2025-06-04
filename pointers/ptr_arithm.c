#include <stdio.h>

int main(){
    int x = 10;
    int y = 20;
    int z = 30;

    int*ptr1 = &x;
    int*ptr2 = &y;
    int*ptr3 = &z;

    printf("ptr1 = %p, ptr2 = %p, ptr3 = %p\n",ptr1, ptr2, ptr3);

    printf("%d elements between ptr1 and ptr2\n",ptr1-ptr2);
    printf("%d elements between ptr1 and ptr3\n",ptr1-ptr3);

    return 0;
}