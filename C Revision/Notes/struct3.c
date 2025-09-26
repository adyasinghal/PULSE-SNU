#include <stdio.h> 
#include <string.h>

typedef struct { //works without writing Students also
    int rollno;
    char name[5];
}Student;

int main() {
    Student stud1;
    stud1.rollno = 1;
    strcpy(stud1.name, "John");
    printf("Student rollno: %d\n", stud1.rollno);
    printf("Student name: %s\n", stud1.name);
    return 0;
}