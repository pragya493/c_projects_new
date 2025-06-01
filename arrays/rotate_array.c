#include <stdio.h>

void reverse_arr(int arr[], int s, int e){
    for(int i =s, j= e; i < j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void rotate_arr(int arr[], int len, int d){
    if(d > len)
        d = d % len;

    reverse_arr(arr, 0, d-1);
    reverse_arr(arr, d, len-1);
    reverse_arr(arr, 0, len-1);

}

void print_arr(int arr[], int len){
    for(int i = 0; i< len; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(arr)/sizeof(arr[0]);
    int d = 11; //rotate array by 11 to left

    print_arr(arr, len);
    rotate_arr(arr, len, d);
    print_arr(arr, len);

    return 0;
}