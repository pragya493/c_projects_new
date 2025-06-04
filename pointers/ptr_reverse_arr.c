#include <stdio.h>

void reverse_arr(int* ptr, int len){
    for(int i=0, j=len-1; i<j; i++,j--){
        int temp = *(ptr+i);
        *(ptr+i) = *(ptr+j);
        *(ptr+j) = temp;
    }
}

void print_arr(int* ptr, int len){
    for(int i=0; i<len; i++){
        printf("%d ",*(ptr+i));
    }
    printf("\n");
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    print_arr(arr, n);
    reverse_arr(arr, n);
    print_arr(arr, n);

    return 0;
}

/*
1 2 3 4 5 6 
6 5 4 3 2 1
*/