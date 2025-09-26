#include <stdio.h> 
#include <string.h>

typedef struct Students{ //works without writing Students also
    int rollno;
    char name[5];
}Student;

int main() {
    //Student stud1;
    struct Students stud1; //Both this and above line works
    stud1.rollno = 1;
    //stud1.name="John"; (Wrong way)
    strcpy(stud1.name, "John");
    printf("Student rollno: %d\n", stud1.rollno);
    printf("Student name: %s\n", stud1.name);
    return 0;
}