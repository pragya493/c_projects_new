#define NDEBUG
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define safe_free(ptr) safe_free_mem((void**)&ptr)

void safe_free_mem(void ** ptr){
    assert(ptr); // Ensure that the pointer is not NULL before freeing
    free(*ptr);
    *ptr = NULL;
}

int func(int* ptr){
    if(ptr == NULL) return -1;
    
    *ptr +=1;
    return 0;
}

int main(){
    int a = 10;
    int *ptr = (int*)malloc(sizeof(int));
    ptr = &a;

    printf("Value of a: %d\n", *ptr);
    printf("Address of a: %p\n", ptr);
    free(ptr);
    // printf("Value of a: %d\n", *ptr);
    // printf("Address of a: %p\n", ptr); //even after free, ptr still points to the address of a
    
    // ptr = NULL; // this will prevent dangling pointer issue

   // *ptr = 11; // this will cause a segmentation fault

    safe_free(ptr); // macro to safely free memory and set ptr to NULL

    if(func(ptr) != 0){
        //if the function returns -1, it means ptr was NULL
        //if function returns 0 then it was dereferenced successfully
        printf("error during function call\n");
        return -1;
    }

    return 0;
}