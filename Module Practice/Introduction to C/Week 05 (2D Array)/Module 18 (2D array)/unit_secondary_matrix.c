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
    int flag = 1; // assumed the matrix is Scalar
    if (m != n)
    {
        flag = 0;
    }

    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row + col == m - 1)
            {
                if (arr[row][col] != 1)
                {
                    flag = 0;
                }
            }
            else
            {
                if (arr[row][col] != 0)
                {
                    flag = 0;
                }
            }
        }
    }

    // check the condition and printing the result
    if (flag == 1)
    {
        printf("Secondary Unit Matrix\n");
    }
    else
    {
        printf("Not Unit Matrix\n");
    }

    return 0;
}