#include <stdio.h>

int main(){
    int arr[] = {4, 2, 3, 1, 0, 5, 7, 9};
    int len = sizeof(arr)/sizeof(arr[0]);

    int* ptr = arr;

    printf("size of ptr: %lu\n",sizeof(ptr));
    printf("content at index-2 is %d\n",ptr[2]);
    printf("content at index-1 is %d\n",*(ptr+1));
    printf("After incrementing the content at index-5, arr[5]= %d\n",(*(ptr+5)+1));

    printf("Initial pointer at %p\n",ptr);
    printf("After incrementing the pointer %p\n",++ptr);
    printf("dereferencing the pointer %d\n",*ptr);

    return 0;
}

/*
size of ptr: 4
content at index-2 is 3
content at index-1 is 2
After incrementing the content at index-5, arr[5]= 6
Initial pointer at 0061FEF8
After incrementing the pointer 0061FEFC
dereferencing the pointer 2
*/