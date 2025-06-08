#include <stdio.h>

typedef struct{
    int y;
    struct child{
        int x;
        char name[10];
    }a;
}parent;

int main(){

    parent p1 = {50, 30, "Emma"};

    printf("Parent's age: %d & child's age: %d, name = %s\n", p1.y, p1.a.x, p1.a.name);

    return 0;
}

/*
Parent's age: 50 & child's age: 30, name = Emma
*/