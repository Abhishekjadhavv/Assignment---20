// Write a program to find the maximum numbers between two numbers using a pointer

#include <stdio.h>

int main()
{
    int a, b, max;
    int *p1 = &a, *p2 = &b;

    printf("Enter two number");
    scanf("%d%d", &a, &b);

    max = *p1 > *p2 ? *p1 : *p2;

    printf("max number is %d", max);

    return 1;
}