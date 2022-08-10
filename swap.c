// Write a function to swap values of two in variables of calling function. (TSRS)

#include <stdio.h>
void swap_values(int *, int *);

int main()
{
    int a, b;
    printf("Enter two number");
    scanf("%d%d", &a, &b);
    printf("Before swaping\n");
    printf("value of a = %d and b = %d", a, b);
    printf("\n");
    swap_values(&a, &b);
    printf("After swaping\n");
    printf("value of a = %d and b = %d", a, b);
    return 1;
}

void swap_values(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}