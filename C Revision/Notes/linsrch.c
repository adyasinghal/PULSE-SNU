#include<stdio.h>

int linsrch(int arr[],int n,int x){
    for (int i=0; i<n; i++){
        if (arr[i]==x){
            return i;
        }
               
    }
    return -1;
}

int main(){
    int y;
    int arr1[5]= {12,3,6,11,8};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    printf("Enter number you want to search: ");
    scanf("%d", &y);
    printf("Result: %d", linsrch(arr1, n1, y));
}