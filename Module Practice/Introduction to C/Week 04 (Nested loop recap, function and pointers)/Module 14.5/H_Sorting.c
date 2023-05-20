#include <stdio.h>

int main()
{

    // taking the input of array size
    int n;
    scanf("%d", &n);

    int arr[n];
    // taking the input of array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    // ascending the array
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

    // printing the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}