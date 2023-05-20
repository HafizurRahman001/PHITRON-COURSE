#include <stdio.h>

int main()
{

    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];

    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            scanf("%d", &arr[row][col]);
        }
    }

    // print the result in reverse way
    for (int row = 0; row < m; row++)
    {
        for (int col = n - 1; col >= 0; col--)
        {
            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }

    return 0;
}