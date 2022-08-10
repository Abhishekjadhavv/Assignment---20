// Write a program to print a string in reverse using a pointer

#include<stdio.h>
#include<string.h>

int main(){
    char *str = "Abhishek";
    int l = strlen(str) -1;
   
    printf("%s",str);
    printf("\nIn Reverse Order\n");
    for(int i = l;i>=0;i--)
     printf("%c",*(str+i));

    return 1;
}