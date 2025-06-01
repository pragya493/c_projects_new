#include <stdio.h>

int max(int a, int b){
    return (a > b) ? a : b;
}
    
int min(int a, int b) {
    return (a < b) ? a : b;
}

int lcm(int a, int b){
    int max_val = max(a, b);
    while(1){
        if(max_val % a == 0 && max_val % b == 0)
            break;
        max_val ++;
    }
    return max_val;
}

int gcd(int a, int b){
    int min_val = min(a, b);
    while(min > 0){
        if(a % min_val == 0 && b % min_val == 0)
            break;
        min_val --;
    }
    return min_val;
}
    
int find_lcm(int arr[], int n){
    int res = lcm(arr[0], arr[1]);
    for(int i=2; i<n ;i++)
        res = lcm(res, arr[i]);

    return res;
}

int find_gcd(int arr[], int n){
    int res = gcd(arr[0], arr[1]);
    for(int i=2; i<n ;i++)
        res = gcd(res, arr[i]);

    return res;
}


int main(){

    int arr[] = {24, 36, 48};
    int len = sizeof(arr)/sizeof(arr[0]);

    int lcm = find_lcm(arr, len);
    printf("lcm of array is %d\n",lcm);

    int gcd = find_gcd(arr, len);
    printf("gcd of array  is %d\n",gcd);

    return 0;
}