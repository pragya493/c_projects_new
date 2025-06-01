#include <stdio.h>

// 999 + 1 = 1000

void insert_ele(int arr[], int* len, int pos, int ele){
    for(int i = *len; i > pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = ele;
    *len +=1;
}

void print_arr(int arr[], int len){
    for(int i = 0; i< len; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[] = { 9, 9, 9};
    int len = sizeof(arr)/sizeof(arr[0]);

    int carry = 1, sum = 0;

    for(int i= len-1; i >= 0; i--){
        sum = arr[i] + carry;
        arr[i] = sum % 10;
        carry = sum/10;
    }

    if(carry)
        insert_ele(arr, &len, 0, 1);

    printf("len: %d\n",len);
    print_arr(arr, len);

    return 0;
}