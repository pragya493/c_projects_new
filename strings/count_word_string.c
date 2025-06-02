#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int count_word(char line[], char word[]){
    int line_len = strlen(line);
    int word_len = strlen(word);

    //index of first letter of word in line
    int end_word = line_len - word_len + 1; //add 1 for null terminator
    int count = 0;

    for(int i=0; i< end_word; i++){
        bool word_found = true;

        //match words with words in line
        for(int j=0; j < word_len; j++){
            if(word[j] != line[i+j]){
                word_found = false;
                break;
            }
        }
        if(word_found)
            count++;
    }
    return count;
}

int main(){
    char line[] = "This is is is it";
    char word[] = "is";

    printf("Count of (is): %d",count_word(line, word));

    return 0;
}