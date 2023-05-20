#include <stdio.h>

void arrFunc(int arr[], int size, int i)
{

    if (i == size)
        return;
    printf("%d\n", arr[i]);
    arrFunc(arr, size, i + 1);
}

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    arrFunc(arr, 5, 0);

    return 0;
}