#include <stdio.h>
#define M 3
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

void swap_rows(int arr[][N], int row1, int row2){
    for(int i=0; i<N; i++){
        int temp = arr[row1][i];
        arr[row1][i] = arr[row2][i];
        arr[row2][i] = temp;
    }
}

int main(){
    int arr[3][3] = {{1, 10, 100}, {2, 20, 200}, {3, 30, 300}};

    print_matrix(M, N, arr);
    swap_rows(arr, 0, 2);
    print_matrix(M, N, arr);

    return 0;
}

/*
1 10 100 
2 20 200
3 30 300

3 30 300
2 20 200
1 10 100
*/