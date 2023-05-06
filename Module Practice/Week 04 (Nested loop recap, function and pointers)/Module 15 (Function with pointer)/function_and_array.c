#include <stdio.h>

void fun(int *arr, int size) // you can use arr[] instead of *arr;
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(int);
    fun(arr, size);

    return 0;
}