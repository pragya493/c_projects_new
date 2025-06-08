#include <stdio.h>

typedef struct{
    int x;
    int y;
}point;

int main(){
    point p1 = {3, 4};

    //ptr is pointer to point structure p1
    point* ptr = &p1;

    printf("coordinates are (%d, %d)\n", ptr->x, ptr->y);

    return 0;
}
/*
coordinates are (3, 4)
*/