#include <stdio.h>

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    // taking the array input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }

    // pirnting the last row
    for (int i = 0; i < m; i++)
    {
        printf("%d ", arr[n - 1][i]);
    }
    printf("\n");

    // printing the last column
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j][m - 1]);
    }

    return 0;
}