#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    int* ptr1;

    int (*ptr2)[5];

    ptr1 = arr;

    ptr2 = &arr;

    for(int i=0; i<5; i++)
        printf("%d ",*(ptr1+i));

    printf("\n");

    for(int i=0; i<5; i++)
        printf("%d ",(*ptr2)[i]);

    printf("\n");

    return 0;

}


