#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    int c;
    fptr=fopen("file1.txt","w");
    //printf("%d\n",fptr);

    if (fptr == NULL) {
        printf ("Error in creating file");
        exit(-1); // Quit the function
    }
    else{ 
        fprintf(fptr, "This is a text file.\n");
        printf("File created successfully!\n"); 
        //printf("%d\n",fptr);
        fclose(fptr); 
        fptr=fopen("file1.txt","r");  
        while ((c = fgetc(fptr)) != EOF){
            printf("%c",c);
            }
    } 
    fclose(fptr);
}