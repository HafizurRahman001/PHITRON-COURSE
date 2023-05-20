#include <stdio.h>

int main()
{

    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // printing the result
    for (int row = 0; row < n; row++)
    {
        printf("%d ", arr[1][row]);
    }
    printf("\n");

    // printing the column

    for (int col = 0; col < n - 1; col++)
    {
        printf("%d ", arr[col][2]);
    }

    return 0;
}