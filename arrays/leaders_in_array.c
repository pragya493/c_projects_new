#include <stdio.h>
#include <stdlib.h>

int* find_leaders(int arr[], int len, int* new_len){
    int* res = (int*)malloc(len * sizeof(int));
    int count = 0;
    
    int max_right = arr[len-1];
    res[count++] = max_right;

    for(int i=len-2; i >=0;i--){
        if(arr[i] > max_right){
            max_right = arr[i];
            res[count++] = max_right;
        }
    }
    *new_len = count;
    if(count != len){
        int* res = realloc(res, sizeof(int) * count);
    }
    return res;
}

void print_arr(int arr[], int len){
    for(int i = 0; i< len; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = { 16, 17, 4, 3, 5, 2};
    int len = sizeof(arr)/sizeof(arr[0]);

    int new_len = 0;
    int* result = find_leaders(arr, len, &new_len);

    print_arr(result, new_len);
    free(result);
    return 0;
}