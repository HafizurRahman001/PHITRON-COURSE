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

    // exact row printing
    int fixedRow = 2;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[fixedRow][i]);
    }
    printf("\n");

    // exact column printing
    int fixedCol = 1;
    for (int i = 0; i < m; i++)
    {
        printf("%d\n", arr[i][fixedCol]);
    }

    return 0;
}