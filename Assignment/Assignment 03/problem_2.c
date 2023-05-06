#include <stdio.h>

int main()
{

    // taking the row number
    int x;
    scanf("%d", &x);

    // printing the pattern
    for (int row = 1; row <= x; row++)
    {
        for (int col = 1; col <= x - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= row; col++)
        {
            printf("%d", row);
        }
        printf("\n");
    }

    return 0;
}