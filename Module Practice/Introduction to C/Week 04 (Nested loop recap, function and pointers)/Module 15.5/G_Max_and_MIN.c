#include <stdio.h>
#include <limits.h>

void maxMin(int x)
{
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d ", &arr[i]);
    }

    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < x; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("%d %d", min, max);
}

int main()
{

    int x;
    scanf("%d", &x);
    maxMin(x);

    return 0;
}