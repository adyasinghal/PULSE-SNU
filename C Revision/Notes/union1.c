#include <stdio.h> 
#include <string.h>

union Student {
    int roll_no;
    char name[50];
};

int main() {
    union Student student;
    
    // Assign and display roll number
    student.roll_no = 12345;
    printf("Roll No: %d\n", student.roll_no);

    // Assign and display name
    strcpy(student.name, "Alice Johnson");
    printf("Name: %s\n", student.name);

    // Print roll_no after name assignment
    printf("Roll No after assigning name: %d\n", student.roll_no); // Undefined value
    return 0;
}