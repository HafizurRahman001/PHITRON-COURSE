#include <stdio.h>

void func(int arr[], int size, int i)
{
    if (i == size)
    {
        return;
    }

    func(arr, size, i + 1);
    if (i % 2 == 0)
    {
        printf("%d ", arr[i]);
    }
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

    func(arr, n, 0);

    return 0;
}