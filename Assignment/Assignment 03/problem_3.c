#include <stdio.h>

int count_before_zero(int arr[], int size)
{
    int count = 0;
    // checking the condition
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    return count;
}

int main()
{

    int n;
    scanf("%d", &n);

    // declare the array size and taking the array input
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    int arraySize = sizeof(arr) / sizeof(int);
    // calling the function
    int result = count_before_zero(arr, arraySize);
    // printing the result
    printf("%d", result);

    return 0;
}