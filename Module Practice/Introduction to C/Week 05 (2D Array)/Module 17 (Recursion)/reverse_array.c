#include <stdio.h>

void fun(int arr[], int size)
{

    if (size == 0)
        return; // base case
    printf("%d\n", arr[size - 1]);
    fun(arr, size - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    int size = sizeof(arr) / sizeof(int);
    fun(arr, size);

    return 0;
}