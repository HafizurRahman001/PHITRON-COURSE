#include <stdio.h>
#include <limits.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    // find the maximum;
    int minimumNumber = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > minimumNumber)
        {
            minimumNumber = arr[i];
        }
    }

    // print the difference between their marks and highest marks
    for (int i = 0; i < n; i++)
    {
        printf("%d ", minimumNumber - arr[i]);
    }

    return 0;
}