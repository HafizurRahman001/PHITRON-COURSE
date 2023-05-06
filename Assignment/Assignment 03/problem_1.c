#include <stdio.h>

int main()
{

    // taking the size of row
    int n;
    scanf("%d", &n);

    // printing the pattern
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= (2 * row) - 1; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }

    // printing the upper loop in reverse
    for (int row = n - 1; row >= 1; row--)
    {
        for (int col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= (2 * row) - 1; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }

    return 0;
}