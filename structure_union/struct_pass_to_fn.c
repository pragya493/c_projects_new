#include <stdio.h>

struct Data{
    int x;
};

void increment(struct Data a, struct Data* b){
    a.x++;
    b->x++;
}

int main(){
    struct Data d1 = {10};
    struct Data d2 = {20};

    printf("previous d1.x = %d, d2.x = %d\n", d1.x, d2.x);

    increment(d1, &d2);
    
    printf("new d1.x = %d, d2.x = %d\n", d1.x, d2.x);
    return 0;
}

/*
previous d1.x = 10, d2.x = 20
new d1.x = 10, d2.x = 21
*/