#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    int count[12] = {0};
    // counting the array element

    for (int i = 0; i < n; i++)
    {
        int val = arr[i];
        count[val]++;
    }

    // print the array
    printf("Total 5 = %d\n", count[5]);
    printf("Total 0 = %d\n", count[0]);

    return 0;
}