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

    int totalElement = m * n;
    int countingZero = 0;

    // counting zero element
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (arr[row][col] == 0)
            {
                countingZero++;
            }
        }
    }

    // checking the condition and print result
    if (totalElement == countingZero)
    {
        printf("Null/Zero Matrix\n");
    }
    else
    {
        printf("Not a Zero/Null Matrix");
    }

    return 0;
}