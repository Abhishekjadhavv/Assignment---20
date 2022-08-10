
// Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include <stdio.h>
#include <string.h>


/* Swaps strings by swapping data*/
void swap2(char *str1, char *str2)
{
    char temp[20];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main()
{
    char str1[20] = "Abhishek";
    char str2[20] = "vikki";
    swap2(str1, str2);
    printf("str1 is %s, str2 is %s", str1, str2);
    return 0;
}