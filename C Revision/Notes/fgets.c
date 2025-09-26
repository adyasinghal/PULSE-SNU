#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    char line[3];
    fptr=fopen("file3.txt","r");
    fgets(line,3,fptr);
    printf("%s\n",line);
    while(fgets(line,2,fptr)!=NULL){
        printf("%s",line);
    }
}