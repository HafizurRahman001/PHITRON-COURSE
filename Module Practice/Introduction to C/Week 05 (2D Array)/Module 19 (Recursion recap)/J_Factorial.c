#include <stdio.h>

long long int fun(int x)
{
    if (x == 0)
    {
        return 1;
    }
    int result = x;
    long long int ans = fun(x - 1);
    return result * ans;
}

int main()
{

    int x;
    scanf("%d", &x);
    long long int result = fun(x);
    printf("%lld\n", result);

    return 0;
}