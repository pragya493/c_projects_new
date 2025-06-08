#include <stdio.h>

struct Employee{
    char name[10];
    int id;

    union{
        float hourly_rate;
        float salary;
    }payment;
};

int main(){
    struct Employee e1;
    snprintf(e1.name, sizeof(e1.name), "Rachel");

    e1.id = 100;
    e1.payment.hourly_rate = 300.0;

    printf("Employee: %s, ID: %d\n", e1.name, e1.id);
    printf("Employee: hourly rate: %.2lf\n", e1.payment.hourly_rate);

    return 0;
}

/*
Employee: Rachel, ID: 100
Employee: hourly rate: 300.00
*/