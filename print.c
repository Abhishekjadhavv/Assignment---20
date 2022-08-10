// Write a program to print the elements of an array in reverse order.

#include <stdio.h>

int main()
{
    int arr[10] = {32, 45, 65, 78, 98, 76, 12, 34, 54, 65};
    int *ptr = arr;

    for (int i = 0; i <= 9; i++)
        printf("%d ", *(ptr + i));

    printf("\nreverse order.\n");
    for (int i = 9; i >= 0; i--)
        printf("%d ", *(ptr + i));
    return 1;
}