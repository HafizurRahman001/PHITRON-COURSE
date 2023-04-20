#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    // taking input for array
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    // taking the position (index) value for which value to be deleted
    int pos;
    scanf("%d", &pos);

    // delete the value of certain index
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    // print the array
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}