#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    fptr=fopen("file3.txt","r");
    char buf[100];
    while(fscanf(fptr, "%*s %s %*s ", buf)==1){
        printf("%s\n", buf);
    }
    fclose(fptr);

    fptr=fopen("file3.txt","r");
    char buf2[100];
    while(fscanf(fptr, "%s", buf2)==1){
        printf("%s ", buf2);
    }
    fclose(fptr);
}