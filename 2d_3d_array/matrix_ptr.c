#include <stdio.h>

void print_matrix(int r, int c, int (*ptr)[c]){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    }
    printf("\n"); 
}

int main(){
    int arr[][3] = {{1, 2, 3},{4, 5, 6}};

    int (*ptr)[3];
    ptr = arr;

    print_matrix(2, 3, ptr);
    return 0;
}

/*
1 2 3 
4 5 6
*/