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
    int flag = 1; // assumed the matrix is diagonal
    if (m != n)
    {
        flag = 0;
    }
    // checking the all element
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row + col == m - 1)
            {
                continue;
            }
            if (arr[row][col] != 0)
            {
                flag = 0;
            }
        }
    }

    // check the condition and printing the result
    if (flag == 1)
    {
        printf("Secondary Diagonal\n");
    }
    else
    {
        printf("Not Diagonal\n");
    }

    return 0;
}