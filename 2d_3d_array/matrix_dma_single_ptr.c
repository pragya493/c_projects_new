//Dynamically allocating 2d array using Single Ptr and 1d array

#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 4

void print_matrix(int r, int c, int* ptr){
    for(int i=0; i< r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",*(ptr + i*c + j));
        }
        printf("\n");
    }
    printf("\n"); 
}

int main(){
    
    int* ptr = (int*)malloc((M * N) * sizeof(int));

    //matrix initialization
    for(int i=0; i< M * N; i++)
        ptr[i] = i * i;

    print_matrix(M, N, ptr);
    free(ptr);

    return 0;
}

/*
0 1 4 9 
16 25 36 49
64 81 100 121
*/