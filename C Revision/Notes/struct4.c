#include <stdio.h> 
#include <string.h>

typedef struct Students{
    int rollno;
    char name[5];
}Student;

int main() {
    struct Students stud[2];
    //Student stud[2];
    
    stud[0].rollno = 1;
    strcpy(stud[0].name, "John");

    stud[1].rollno = 2;
    strcpy(stud[1].name, "Mary");

    for(int i=0; i <2; i++){
    printf("Student rollno: %d\n", stud[i].rollno);
    printf("Student name: %s\n", stud[i].name); }

    return 0;
}