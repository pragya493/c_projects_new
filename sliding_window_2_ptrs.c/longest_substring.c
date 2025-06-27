#include <stdio.h>
#include <string.h>
#include <limits.h>

int max(int a, int b){
    return a > b ? a : b;
}

int longest_substring(char* str){
    //map ASCII code of each char (with current index of char in str)
    int mpp[256];
    for(int i=0; i< 256; i++)
        mpp[i] = -1;

    int left = 0, right=0;
    int n = strlen(str);
    int max_length=0;

    while(right < n){
        //if char already exists in map
        if(mpp[(unsigned char) str[right]] != -1){
            //ensure we take valid left, i.e. included in susbtring
            if(mpp[(unsigned char) str[right]]>= left){
                //update left pointer
                left = mpp[(unsigned char) str[right]] +1;
            }
        }
        max_length = max(max_length, right-left+1);
        //store right in map
        mpp[(unsigned char) str[right]] = right;
        //increment the right pointer
        right++;        
    }
    return max_length;
}

int main(){
    char str[] = "cadbzabcd";
    printf("max length of substring %d\n",longest_substring(str));
    return 0;
}

/*
max length of substring 5
*/