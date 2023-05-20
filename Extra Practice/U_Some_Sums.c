#include <stdio.h>

int main()
{

    int n, a, b, sum = 0;

    scanf("%d %d %d", &n, &a, &b);

    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        int index = i;

        while (index != 0)
        {
            int remainder = index % 10;
            count += remainder;
            index = index / 10;
        }
        if (count >= a && count <= b)
        {
            sum += i;
            // printf("%d ", i);
        }
    }

    printf("%d\n", sum);

    return 0;
}
