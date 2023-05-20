#include <stdio.h>

void change_it(int arr[], int size)
{
    arr[size - 1] = 100;
}

int main()
{

    // taking array size
    int x;
    scanf("%d", &x);
    // taking input of array element
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d ", &arr[i]);
    }

    // calling the function
    int sizeOfArr = sizeof(arr) / sizeof(int);
    change_it(arr, sizeOfArr);

    // printing the array
    for (int i = 0; i < x; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}