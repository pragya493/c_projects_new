#include <stdio.h>

int main(){
    int greed[] = {1, 3, 3, 4, 5};
    int size[] = {1, 1, 2, 2, 3, 4};

    int m = sizeof(greed)/sizeof(greed[0]);
    int n = sizeof(size)/sizeof(size[0]);

    int l=0, r=0;

    while(l< n && r<m){
        if(greed[r] <= size[l]){
            r++;
            printf("r = %d\n",r);
        }
        l++;
        printf("l = %d\n",l);
    }
    printf("max no. of children that can be satisfied %d\n",r);
    return 0;
}

/*
max no. of children that can be satisfied 3
*/