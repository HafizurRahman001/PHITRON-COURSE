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

    // short array in descending
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // printing the result
    if (n % 2 == 0)
    {
        printf("%d %d\n", arr[(n / 2) - 1], arr[(n / 2)]);
    }
    else
    {
        printf("%d\n", arr[n / 2]);
    }

        return 0;
}