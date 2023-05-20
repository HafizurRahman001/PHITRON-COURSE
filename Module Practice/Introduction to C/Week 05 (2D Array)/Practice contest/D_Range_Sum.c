#include <stdio.h>

int main()
{

    long long int n;

    scanf("%lld", &n);

    for (long long int i = 0; i < n; i++)
    {
        long long int x, y;
        long long int sum = 0;
        scanf("%lld %lld", &x, &y);
        for (long long int j = x; j <= y; j++)
        {
            sum += j;
        }
        printf("%lld\n", sum);
    }

    return 0;
}