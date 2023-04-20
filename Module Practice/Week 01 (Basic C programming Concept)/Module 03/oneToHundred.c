#include <stdio.h>
int main()
{
    int i = 0, n, sum = 0;
    scanf("%d", &n);
    for (i; i <= n; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}