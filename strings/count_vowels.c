#include <stdio.h>
#include <ctype.h>

int count_vowel(char* line){
    int i=0, count=0;

    while(line[i] != '\0'){
        switch(toupper(line[i])){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    char line[] = "I want to buy an Ipad";
    
    printf("Total vowel: %d\n",count_vowel(line));

    return 0;
}