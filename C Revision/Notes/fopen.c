#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *fptr; // Declare a pointer to a file
    char filename[]= "file2.dat";
    fptr = fopen(filename,"w");
    // Also, alternatively fptr = fopen (“file2.dat”,"w");

    if (fptr == NULL) {
        printf ("Error in creating file");
        exit(-1); // Quit the function
    }
    else{ 
    fprintf(fptr, "This is a test file.\n");
    fprintf(fptr, "This is a test file 2.\n"); // Write to the file
    printf("File created successfully!\n");
    fclose(fptr); // Close the file 
    } 
}