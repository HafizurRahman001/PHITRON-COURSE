#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    int x, result = 0;
    scanf("%d", &x);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                result = 1;
            }
        }
    }

    if (result == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("NO\n");
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    return 0;
}