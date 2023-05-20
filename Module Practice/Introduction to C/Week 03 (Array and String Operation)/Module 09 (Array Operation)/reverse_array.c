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

    int i = 0, j = n - 1;

    // reverse the array element
    while (i < j)
    {

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    // print the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}