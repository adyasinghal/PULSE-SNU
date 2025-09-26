#include<stdio.h>

struct Student{
    char name[50];
    int age;
    float grade;
}s1;

int main(){
    //struct Student s1;
    s1.age=20;
    printf("Age: %d",s1.age);
}