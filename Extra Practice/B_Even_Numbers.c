#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    // printing the result
    for (int i = 1; i <= n; i++)
    {
        if (n == 1)
        {
            printf("%d", -1);
        }
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}