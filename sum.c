// Write a program to compute the sum of all elements in an array using pointer.

#include<stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0,*ptr = arr;
    
    
    for(int i = 0;i<=9;i++){
      sum+=*(ptr+i);
    }

    printf("sum is %d",sum);

    return 1;
}