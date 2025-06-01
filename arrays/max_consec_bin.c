#include <stdio.h>

int max(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    int arr[] = {1, 1, 0, 0, 1, 1, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int max_count = 1;
    
    for(int i=0; i< len; i++){
        int count = 1;
        while(arr[i] == arr[i-1] && i < len){
            count++;
            i++;
            max_count = max(count,max_count);
        }   
    }
    
    printf("max consecutive binary are %d",max_count);
    return 0;
}