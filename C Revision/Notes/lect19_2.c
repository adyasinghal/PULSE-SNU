#include<stdio.h>

float add(int a, int b ){
    return a+b;
}
float sub(int a, int b ){
    return a-b;
}
float mult(int a, int b ){
    return a*b;
}
float div(int a, int b ){
    return a/b;
}

int main(){
    float (*ptr[])(int, int)={add, sub, mult, div};
    int op;
    int x=20, y=10;
    float result;
    printf("Enter operation you want to perform: 1 for add, 2 for sub, 3 for mult, 4 for div: ");
    scanf("%d", &op);
    if (op>5){
        printf("Invalid operator");
    }
    else{
        result= (*ptr[op-1])(x,y);
        printf("%.2f", result);
    }
}