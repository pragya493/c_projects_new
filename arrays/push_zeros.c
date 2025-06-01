#include <stdio.h>

void push_zeros(int arr[], int len){
    int count = 0;

    for(int i=0; i < len; i++){
        if(arr[i] != 0)
            arr[count++] = arr[i];
    }
    for(int i = count; i< len; i++){
        arr[i] = 0;
    }
}

void print_arr(int arr[], int len){
    for(int i = 0; i< len; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[] = {1, 0, 3, 6, 0, 8, 7, 0};
    int len = sizeof(arr)/sizeof(arr[0]);

    push_zeros(arr, len);

    print_arr(arr, len);

    return 0;
}