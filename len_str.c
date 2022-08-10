// Write a program to calculate the length of the string using a pointer

#include<stdio.h>

int main(){
    char *str = "Abhishek";
    char *p = str;
    int i;

    for( i = 0;*(p+i);i++);

    printf("lenght of string is %d",i);


    return 1;
}