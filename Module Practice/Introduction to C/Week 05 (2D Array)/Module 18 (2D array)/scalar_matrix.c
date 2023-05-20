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
    int firstValue = arr[0][0];
    if (m != n)
    {
        flag = 0;
    }

    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == col)
            {
                if (arr[row][col] != firstValue)
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
        printf("Scalar Matrix\n");
    }
    else
    {
        printf("Not Scalar Matrix\n");
    }

    return 0;
}