#include <stdio.h>

long long int func(int arr[], int size, int i)
{
    if (i == size)
    {
        return 0;
    }

    long long int l = func(arr, size, i + 1);
    long long int result = l + arr[i];
    return result;
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

    int arraySize = sizeof(arr) / sizeof(int);
    long long int length = func(arr, arraySize, 0);
    printf("%lld", length);

    return 0;
}