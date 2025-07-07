//denomination of 5, 10, 20

#include <stdio.h>
#include <stdbool.h>

bool greedy(int* bills, int len){
    int five=0, ten=0;
    for(int i=0; i<len; i++){
        if(bills[i] == 5){
            five += 1;
        }
        else if(bills[i] == 10){
            if(five){
                five -= 1;
                ten += 1;
            }
            else
                return false;
        }
        else{
            if(five && ten){
                five -= 1;
                ten -= 1;
            }
            else if(five){
                five -= 2;
            }
            else
                return false;
        }
    }
    return true;
}

int main(){
    int bills[] = {5, 5, 10, 10, 20};
    int len = sizeof(bills)/sizeof(bills[0]);

    printf("change for lemonade possible? %s\n",greedy(bills, len) ? "yes" : "no");

    return 0;
}

/*
change for lemonade possible? no
*/