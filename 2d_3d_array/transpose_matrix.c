#include <stdio.h>
#define M 2
#define N 3

void print_matrix(int r, int c, int arr[][c]){
    for(int i=0; i< r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");   
}

void transpose_matrix(int arr[][N], int b_arr[][M]){
    for(int i=0; i< N; i++){
        for(int j=0; j<M; j++){
            b_arr[i][j] = arr[j][i];
        }
    }
}

int main(){

    int m=2;
    int n = 3;
    int arr[M][N] = {{0, 1, 2}, {3, 4, 5}};

    int b_arr[N][M];

    print_matrix(M, N, arr);
    transpose_matrix(arr, b_arr);
    print_matrix(N, M, b_arr);

    return 0;
}
/*
0 1 2 
3 4 5

0 3
1 4
2 5
*/