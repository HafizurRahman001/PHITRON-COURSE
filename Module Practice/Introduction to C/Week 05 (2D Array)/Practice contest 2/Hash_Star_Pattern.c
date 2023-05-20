#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == ((n / 2) + 1)) // printing the coloumn condition
            {
                printf("#");
            }
            else if (i == ((n / 2) + 1)) // printing the row condition
            {
                printf("#");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}