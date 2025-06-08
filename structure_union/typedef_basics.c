#include <stdio.h>
#define N 4

typedef struct{
    char name[20];
    int worth;
}celeb;

typedef int* iptr;

typedef int arr[N];

int main(){
    celeb c1 = {"Ariana", 220};
    celeb c2 = {"Selena", 300};

    printf("celeb name: %s, worth: $%d mn\n", c1.name, c1.worth);
    printf("celeb name: %s, worth: $%d mn\n",c2.name, c2.worth);

    int x = 10;
    iptr ptr = &x;
    printf("new value of x %d \n",++(*ptr));

    arr y = {1, 2, 3, 4};
    int len = sizeof(y)/sizeof(y[0]);

    for(int i=0; i<len; i++)
        printf("%d ",y[i]);

    return 0;
}

/*
celeb name: Ariana, worth: $220 mn
celeb name: Selena, worth: $300 mn
new value of x 11
1 2 3 4
*/