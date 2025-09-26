#include<stdio.h>
#include<string.h>

struct employee{
    char name[50];
    int utype; //to figure how to treat age
    union{
        int int_age;
        char *str_age;
    }age;
}s1[10];

int main(){
    strcpy(s1[0].name,"Mary");
    s1[0].utype=1;
    s1[0].age.int_age=20;
    strcpy(s1[1].name,"Nary");
    s1[1].utype=0;
    s1[1].age.str_age="Twenty";
    printf("%s age: %d\n",s1[0].name,s1[0].age.int_age);
    printf("%s age: %s",s1[1].name,s1[1].age.str_age);
}