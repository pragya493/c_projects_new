//dynamically allocating 2d array using 1 malloc call

#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 4

void print_matrix(int r, int c, int* ptr){
    for(int i=0; i< r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",ptr[i* N + j]);
        }
        printf("\n");
    }
    printf("\n"); 
}

int main(){
    int** arr = (int**)malloc(M * sizeof(int*) + M * N * sizeof(int));

    int* ptr = (int*)(arr + M);
    
    //row pointer initialization
    for(int i=0; i<M; i++){
        arr[i] = ptr + i * N;
    }

    //matrix initializaion
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            arr[i][j] = i * i;
        }
    }
    print_matrix(M, N, ptr);

    free(arr); 

    return 0;

}

/*
0 0 0 0 
1 1 1 1
4 4 4 4
*/