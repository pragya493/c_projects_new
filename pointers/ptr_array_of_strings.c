#include <stdio.h>

void print_arr(char** arr, int len){
    for(int i=0; i<len; i++){
        printf("%s ",*(arr+i));
    }
}

int main(){

    //declare array of strings
    char* arr[] = {"Intel", "Qualcomm", "Apple"};
    int len = sizeof(arr)/sizeof(arr[0]);

    print_arr(arr, len);

    return 0;
}