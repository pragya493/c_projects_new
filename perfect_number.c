#include <stdio.h>

int check_perfect(int num){
    int sum = 0;
    for(int i=1; i <= num/2; i++){
        if(num % i == 0){
            printf("%d ",i);
            sum += i;
        }
    }
    printf("\n");
    return sum == num;
}

int main(){
    int num =33550336;

    printf(check_perfect(num) ? "true" : "false");
    return 0;
}