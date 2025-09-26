#include <stdio.h> 
#include <string.h>

union Student{ // works without writing Student also
    int roll_no;
    char name[50];
}d1;

int main() {
    //union Student student;
    
    // Assign and display roll number
    d1.roll_no = 12345;
    printf("Roll No: %d\n", d1.roll_no);

    // Assign and display name
    strcpy(d1.name, "Alice Johnson");
    printf("Name: %s\n", d1.name);

    // Print roll_no after name assignment
    printf("Roll No after assigning name: %d\n", d1.roll_no); // Undefined value
    return 0;
}