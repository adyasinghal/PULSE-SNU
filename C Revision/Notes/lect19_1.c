#include<stdio.h>

void swap(int *a, int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

int main(){
    void(*ptr)(int *, int *)= swap;
    int x=10, y=20;
    ptr(&x,&y);
    printf("%d %d",x,y);
}