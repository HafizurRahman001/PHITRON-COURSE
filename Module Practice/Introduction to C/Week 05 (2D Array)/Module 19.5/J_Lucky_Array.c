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

    // find out the minimum number from the array
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    // checking how many time the minimum value occour in array
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            count++;
        }
    }

    // checking the condition if the count is even or odd
    if (count % 2 == 0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }

    return 0;
}