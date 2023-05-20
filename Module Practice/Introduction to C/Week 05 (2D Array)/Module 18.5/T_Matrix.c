#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x;
    scanf("%d", &x);
    int arr[x][x];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }

    // print the result
    int totalPrimaryDiagonal = 0;
    int totalSecondaryDiagonal = 0;
    // check the primary diagonal
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i == j)
            {
                totalPrimaryDiagonal += arr[i][j];
            }
        }
    }
    // check the secondary diagonal
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i + j == x - 1)
            {
                totalSecondaryDiagonal += arr[i][j];
            }
        }
    }

    // print the diference of primary and secondary diagonal
    printf("%d\n", abs(totalPrimaryDiagonal - totalSecondaryDiagonal));
    return 0;
}