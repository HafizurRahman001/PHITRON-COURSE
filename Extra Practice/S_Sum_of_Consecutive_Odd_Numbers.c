#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    // taking two input
    for (int i = 0; i < n; i++)
    {
        int a, b, sum = 0;
        scanf("%d %d", &a, &b);

        if (b > a)
        {
            for (int i = a + 1; i < b; i++)
            {
                if (i % 2 == 1)
                {
                    sum += i;
                }
            }
        }
        else if (a > b)
        {
            for (int i = b + 1; i < a; i++)
            {
                if (i % 2 == 1)
                {
                    sum += i;
                }
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}