#include <stdio.h>

int main()
{

    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int arr[n1];

    // taking input element for array
    for (int i = 0; i < n1; i++)
    {
        scanf("%d ", &arr[i]);
    }

    // initialize the count array by all zero element
    int count[100001] = {0};

    // if same array element determined, then update the count array index;
    for (int i = 0; i < n1; i++)
    {
        int value = arr[i];
        count[value]++;
    }

    // print the count array element without zero
    for (int i = 0; i < 100001; i++)
    {
        if (count[i] != 0)
        {
            printf("%d\n", count[i]);
        }
    }

    return 0;
}