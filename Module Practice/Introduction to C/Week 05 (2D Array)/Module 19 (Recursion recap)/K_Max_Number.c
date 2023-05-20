#include <stdio.h>
#include <limits.h>

int fun(int arr[], int size, int i)
{
    // base case
    if (i == size)
    {
        return INT_MIN;
    }
    // calling the recurstion function
    int ans = fun(arr, size, i + 1);

    // checking the condition
    if (arr[i] > ans)
    {
        return arr[i];
    }
    else
    {
        return ans;
    }
}

int main()
{

    int x;
    scanf("%d", &x);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d ", &arr[i]);
    }
    int result = fun(arr, x, 0);
    printf("%d", result);
    return 0;
}