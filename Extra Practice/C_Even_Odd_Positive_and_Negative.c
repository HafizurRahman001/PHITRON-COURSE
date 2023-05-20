#include <stdio.h>

int main()
{

    int n, x, even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &x);

        if (x > 0)
        {
            positive++;
        }
        if (x < 0)
        {
            negative++;
        }
        if (x % 2 == 0)
        {
            even++;
        }
        if (x % 2 == 1 || x % 2 == -1)
        {
            odd++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);

    return 0;
}