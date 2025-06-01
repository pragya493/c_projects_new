//find odd duplicates in array 1 to N using XOR 

#include <stdio.h>

int find_duplicates(int arr[], int len, int N){
    int res = 0;

    //store xor res of all array elements in res
    for(int i=0; i< len; i++)
        res ^= arr[i];

    //xor 1 to N with res,
    //final res would be the duplicate element
    for(int i=1; i<=N; i++)
        res ^= i;

    return res;
}

int main(){
    //1 to N=3
    int arr[] = {1, 3, 1, 2, 1, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int N =3;

    int dup = find_duplicates(arr, len, N);
    printf("Duplicate no. is %d\n",dup);

    return 0;
}