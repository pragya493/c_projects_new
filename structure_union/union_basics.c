#include <stdio.h>

union Letter{
    int num;
    char alphabet;
    int arr[10];
};

int main(){
    union Letter let;

    let.num = 16;
    printf("letter_num: %d\n",let.num);

    let.alphabet = 'P';
    printf("alphabet: %c\n",let.alphabet);

    printf("size of union: %ld\n",sizeof(let));

    return 0;
}

/*
letter_num: 16
alphabet: P
size of union: 40
*/