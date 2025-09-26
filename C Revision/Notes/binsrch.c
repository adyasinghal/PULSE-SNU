#include<stdio.h>

int binsrch(int arr[], int str, int end, int x){
    int mid;
    if (str==end){
        if (arr[str]==x){
            return str;
        }
        else{
            return -1;
        }
    }
    else{
        mid=(str+end)/2;
        if (arr[mid]==x){
            return mid;
        }
        else{
            if (arr[mid]>x){
                return binsrch(arr, str, mid-1, x);
            }
            else{
                return binsrch(arr, mid+1, end, x);
            }
        }
    }
}

int main(){
    int arr1[5]={1,2,3,4,5};
    int y=1;
    printf("%d", binsrch(arr1, 0,4,y));
}