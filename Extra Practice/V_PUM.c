#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int j = 1;

    for (int i = 1; i <= n; i++)
    {
        while (1)
        {
            // base case
            if (j == (4 * n + 1))
            {
                break;
            }

            // printing the PUM for every 4 number column;
            if (j % 4 == 0)
            {
                printf("PUM\n");
            }
            else
            {
                printf("%d ", j);
            }
            j++;
        }
        printf("\n");
    }

    return 0;
}