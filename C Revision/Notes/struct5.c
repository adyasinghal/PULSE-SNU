#include <stdio.h> 
#include <string.h>

typedef struct Students{
    int rollno;
    char name[5];
}Student;

int main() {
    Student stud1;
    stud1.rollno = 1;
    strcpy(stud1.name, "John");
    struct Students *p1;
    //Student* p1;
    p1 = &stud1;
    printf("Student rollno: %d\n", (*p1).rollno);
    printf("Student name: %s\n", (*p1).name);
    printf("Student rollno: %d\n", p1->rollno);
    printf("Student name: %s\n", p1->name);
    return 0;
}