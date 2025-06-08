#include <stdio.h>

typedef struct{
    int x;
    char name[10];
}child;

typedef struct{
    int y;
    child a;
}parent;


int main(){

    parent p1 = {50, 30, "Emma"};

    printf("Parent's age: %d & child's age: %d, name = %s\n", p1.y, p1.a.x, p1.a.name);

    // child c1 = {30, "Emma"};
    // parent p1 = {50, c1};
    // printf("child's name: %s, age %d\n", c1.name, c1.x);

    return 0;
}

/*
Parent's age: 50 & child's age: 30, name = Emma
*/