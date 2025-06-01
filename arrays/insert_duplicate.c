#include <stdio.h>

void insert_ele(int arr[], int len, int pos, int ele){
    for(int i = len-1; i > pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = ele;
}

void print_arr(int arr[], int len){
    for(int i = 0; i< len; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[] = { 1, 0, 2, 3, 0, 4, 5, 0};
    int len = sizeof(arr)/sizeof(arr[0]);
    //duplicate the num
    int num = 0;

    for(int i = 0; i< len; i++){
        if(arr[i] == num){
            insert_ele(arr, len, i+1, num);
            i +=2;
        }
        
    }

    print_arr(arr, len);

    return 0;
}