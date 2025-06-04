#include <stdio.h>

int main(){
    int m = 100;
    char name[] = "Jennie";

    int* ptr1;
    ptr1 = &m;

    printf("The address of variable in ptr: %p\n",ptr1);
    printf("The value of variable %d\n",*ptr1); //dereferencing int pointer

    char* ptr2;
    ptr2 = name;

    printf("The address of string in ptr: %p\n",ptr2);
    printf("The string is %s\n",ptr2); //dereferencing char pointer

    int arr[3] = {1, 2, 3};
    int *ptr3 = arr;

    //*(ptr+i) or *(arr+i) or ptr[i] or arr[i]
    for(int i=0; i<3; i++)
        printf("%d ", *(ptr3+i));

    return 0;
}

/* output
The address of variable in ptr: 0061FF0C
The value of variable 100
The address of string in ptr: 0061FF05
The string is Jennie
1 2 3 */