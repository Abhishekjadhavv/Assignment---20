// Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include <stdio.h>

void swap(int *ptr, int size)
{
    int round, temp;

    for (round = 1; round <= size - 1; round++)
    {
        for (int i = 0; i < size - round; i++)
        {
            if (*(ptr + i) > *(ptr + 1 + i))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + 1 + i);
                *(ptr + 1 + i) = temp;
            }
        }
    }
}

int main()
{
    int arr[10] = {23, 45, 67, 89, 76, 54, 32, 45, 67, 89};

    printf("Before swapingn\n");
    for (int i = 0; i <= 9; i++)
        printf("%d ", arr[i]);

    printf("\n");

    swap(arr, 10);

    printf("After swapingn\n");
    for (int i = 0; i <= 9; i++)
        printf("%d ", arr[i]);
    return 1;
}
