#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    long long int sum, a, b, c;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld %lld %lld", &sum, &a, &b, &c);
        long long int totalOfThree = a + b + c;
        long long int missingValue = sum - totalOfThree;
        printf("%lld\n", missingValue);
    }

    return 0;
}