#include <stdio.h>

int max(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    int arr[] = {-10, -3, 5, 6, -20, 1, 2, 7};
    int len = sizeof(arr)/sizeof(arr[0]);

    int max1 = 0, max2=0, max3=0, min1=0, min2=0;

    for(int i=0; i< len; i++){
        if(arr[i] > arr[max1]){
            max3 = max2;
            max2 = max1;
            max1 = i;
        }
        else if(arr[i] > arr[max2]){
            max3 = max2;
            max2 = i;
        }
        else if(arr[i] > arr[max3]){
            max3 = i;
        }
        if(arr[i] < arr[min1]){
            min2 = min1;
            min1 = i;
        }
        else if(arr[i] < arr[min2]){
            min2 = i;
        }
    }
    int res = max((arr[max1]* arr[max2] * arr[max3]),(arr[max1] * arr[min1] * arr[min2]));

    printf("max product of triplet is %d\n",res);

    return 0;
}