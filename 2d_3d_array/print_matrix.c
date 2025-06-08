#include <stdio.h>
#define M 2
#define N 3

void print_matrix(int r, int c, int* matrix){
    for(int i=0; i< r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",*(matrix + i*c + j));
        }
        printf("\n");
    }
    printf("\n"); 
}

int main(){
    int arr[M][N] = {{1, 2, 3}, {4, 5, 6}};

    print_matrix(M, N, (int*)arr); //or int* ptr = arr;
    return 0;
}

/*
1 2 3 
4 5 6
*/