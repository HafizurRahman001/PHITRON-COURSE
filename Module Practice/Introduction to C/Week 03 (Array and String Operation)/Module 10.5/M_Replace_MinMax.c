#include <stdio.h>
#include <limits.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    // taking the array input
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    // count minimum and maximum
    int minimum = INT_MAX;
    int maximum = INT_MIN;

    for (int i = 0, j = 0; i < n, j < n; i++, j++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    // swap the minimum to maximum value

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == minimum)
        {
            arr[i] = maximum;
        }
        else if (arr[i] == maximum)
        {
            arr[i] = minimum;
        }
    }

    // print the array

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}