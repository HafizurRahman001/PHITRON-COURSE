#include <stdio.h>

int main()
{

    int n, k;
    scanf("%d %d", &n, &k);

    // printing the loop k times
    for (int i = 0; i < k; i++)
    {
        // printing the loop from 1 to n times;
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}