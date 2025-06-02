#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool verify_pswd(char* pswd, int len){
    if(len < 8)
        return false;

    bool hasUpperCase = false;
    bool hasLowerCase = false;
    bool hasDigit = false;
    bool hasPunct = false;
    
    for(int i=0; i<len; i++){
        if(isupper(pswd[i])) hasUpperCase = true;
        if(islower(pswd[i])) hasLowerCase = true;
        if(isdigit(pswd[i])) hasDigit = true;
        if(ispunct(pswd[i])) hasPunct = true;
    }

    if(!hasUpperCase || !hasLowerCase || !hasDigit || !hasPunct)
        return false;

    return true;
}


int main(){
    char pswd[] = "Abc@123!";
    int len = strlen(pswd);

    if(verify_pswd(pswd, len)){
        printf("Your password is strong\n");
    }
    else{
        printf("Your password is weak\n");
    }

    return 0;
}