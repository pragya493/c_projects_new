#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int id;
    int age;
    int struct_size;
    char stud_name[]; //FAM VLA must be last member of structure
}Student;

Student* create_student(int id, int age, char name[]){
    Student* stud = malloc(sizeof(*stud) + (sizeof(char) * (strlen(name) + 1)));

    if(stud == NULL){
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }

    stud->id = id;
    stud->age = age;
    strcpy(stud->stud_name, name);

    stud->struct_size = sizeof(*stud) + (sizeof(char) * (strlen(stud->stud_name) + 1));
    return stud;
}

void print_student(Student* stud){
    printf("name: %s\n id: %d\n age: %d\n struct_size: %d\n",stud->stud_name, stud->id, stud->age, stud->struct_size);
}

int main(){
    Student* stu1 = create_student(1, 25, "Tate");
    Student* stu2 = create_student(2, 23, "Mabel");

    print_student(stu1);
    print_student(stu2);

    printf("The size of student structure: %lu\n",sizeof(Student));
    printf("The size of student structure ptr: %lu\n",sizeof(stu1));

    free(stu1);
    free(stu2);
}

/*
name: Tate
 id: 1
 age: 25
 struct_size: 17
name: Mabel
 id: 2
 age: 23
 struct_size: 18
The size of student structure: 12
The size of student structure ptr: 4
*/