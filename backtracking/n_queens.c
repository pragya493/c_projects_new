#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 20

int isSafe(int row, int col, char board[N][N], int n){
    int duprow = row;
    int dupcol = col;

    while(row >= 0 && col >= 0){
        if(board[row][col] == 'Q') 
            return 0;
        row--;
        col--;
    }

    row = duprow;
    col = dupcol;

    while(col >= 0){
        if(board[row][col] == 'Q') 
            return 0;
        col--;
    }

    row = duprow;
    col = dupcol;
    while(row < n && col >= 0){
        if(board[row][col] == 'Q') 
            return 0;
        row++;
        col--;
    }
    return 1;
}

void fill_board(int col, char board[N][N], char ans[N][N][N], int* total_ways, int n ){
    
    //base case
    if(col == n) {
        //store the result in ans
        for(int i=0; i<n; i++){
            strcpy(ans[*total_ways][i], board[i]);
        }
        (*total_ways)++;
        return;
    }

    for(int row=0; row<n; row++){
        if(isSafe(row, col, board, n)){
            board[row][col] = 'Q';
            fill_board(col+1, board, ans, total_ways, n);
            board[row][col] = '.';
        }
    }
}

void solveNQueen(int n, char ans[N][N][N], int* total_ways){
    char board[N][N];
    char s[N]; //eg. s = "...."
    memset(s, '.', n);
    s[n] = '\0';

    for(int i=0; i<n; i++){
        strcpy(board[i], s);
    }
    fill_board(0, board, ans, total_ways, n);
}

int main(){
    int n = 4;  //4 queens & 4x4 chess board
    char ans[N][N][N];
    int total_ways = 0;

    solveNQueen(n, ans, &total_ways);

    for(int i=0; i < total_ways; i++){
        printf("arrangement %d\n",i+1);
        for(int j=0; j< n; j++){
            printf("%s\n",ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}