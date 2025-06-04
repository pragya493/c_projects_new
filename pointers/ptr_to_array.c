//There is difference between the pointer to an array and 
//pointer to the first element of an array.

#include <stdio.h>

//Normally, it is impossible to find the size of array inside a function, 
//but if we pass the pointer to an array, the it is possible.
int print_size(int (*ptr)[5]){
    printf("array size -> %lu\n",sizeof(*ptr));
    for(int i=0; i<5; i++){
        printf("%d ",(*ptr)[i]);
    }
    printf("\n");
}

void print_arr(int* ptr, int len){
    for(int i=0; i<len; i++){
        printf("%d ",*(ptr+i));
    }
    printf("\n");
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int len = sizeof(arr)/sizeof(arr[0]);

    //points to first element of array
    int *p = arr;
    print_arr(p, len);

    int (*ptr)[5];
    ptr = &arr;

    print_size(ptr);
    return 0;
}

/*
1 2 3 4 5 
array size -> 20
1 2 3 4 5
*/