//The edit distance problem seeks to find the minimum number of 
//edits (insertions, deletions, or substitutions) required to transform one string into another

#include <stdio.h>
#include <string.h>

int min(int a, int b, int c){
    return (a < b) ? (a < c ? a : c) : (b < c ? b : c); 
}

int edit_dis(char* s1, char* s2, int i, int j){
    //base case - s1 exhausted
    if(i == 0)
        return j;

    //base case - s2 exhausted
    if(j == 0)
        return i;

    //if letter match
    if(s1[i-1] == s2[j-1])
        return 0 + edit_dis(s1, s2, i-1, j-1);

    //if not match
    return 1 + min(edit_dis(s1, s2, i, j-1),   //insert
                    edit_dis(s1, s2, i-1, j),  //delete
                    edit_dis(s1, s2, i-1, j-1)); //replace
}


int main(){
    char s1[] = "abcd";
    char s2[] = "bcef";

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    printf("The min edits required %d\n",edit_dis(s1, s2, len1, len2));

    return 0;
}

/*
The min edits required 3
*/