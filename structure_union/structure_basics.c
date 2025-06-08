#include <stdio.h>

struct student{
    char name[20];
    int age;
    int rank;
};

int main(){
    struct student s1 = {"Taylor Swift", 32, 1};
    printf("%s\n%d\n%d\n",s1.name, s1.age, s1.rank);

    struct student s2 = {.name = "Adele", .age = 35, .rank=1};
    printf("%s\n%d\n%d\n",s2.name, s2.age, s2.rank);

    return 0;
}

/*
Taylor Swift
32
1
Adele
35
1
*/

