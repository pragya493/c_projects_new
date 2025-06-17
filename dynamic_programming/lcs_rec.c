//Longest Common Subsequence (LCS) problem
//finds the longest sequence that appears in the same relative order, 
//but not necessarily contiguously, in two given strings.

#include <stdio.h>
#include <string.h>

int max(int a, int b){
    return (a > b) ? a : b; 
}

int lcs(char* s1, char* s2, int i, int j){

    //base case
    if(i == 0 || j == 0)
        return 0;

    //take case
    if(s1[i-1] == s2[j-1])
        return 1 + lcs(s1, s2, i-1, j-1);
    
    //not take case
    return max(lcs(s1, s2, i-1, j), lcs(s1, s2, i, j-1));
}


int main(){
    char s1[] = "abcdbca";
    char s2[] = "bca";

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    printf("The length of LCS is %d\n",lcs(s1, s2, len1, len2));

    return 0;
}

/*
The length of LCS is 3
*/