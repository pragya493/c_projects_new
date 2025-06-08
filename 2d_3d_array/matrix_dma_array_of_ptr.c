//Dynamically allocating 2d array using 2 malloc calls - double pointer

#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 4

void print_matrix(int r, int c, int** ptr){
    for(int i=0; i< r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    }
    printf("\n"); 
}

int main(){

    //double pointer for each row
    int** ptr = (int**)malloc(M * sizeof(int*));

    //addr returned by malloc for each row
    for(int i=0; i<M; i++){
        ptr[i] = (int*)malloc(N * sizeof(int));
    }

    //matrix_initialization
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            ptr[i][j] = i * j;
        }
    }

    print_matrix(M, N, ptr);

    free(ptr);
    return 0;
}

/*
0 0 0 0 
0 1 2 3
0 2 4 6
*/