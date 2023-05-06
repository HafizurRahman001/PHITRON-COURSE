for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col < n - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }