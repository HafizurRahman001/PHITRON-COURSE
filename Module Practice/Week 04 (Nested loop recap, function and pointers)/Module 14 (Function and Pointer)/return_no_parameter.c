#include <stdio.h>

int sum(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    int sum = x + y;
    return sum;
}

int main()
{

    int result = sum();
    int result1 = sum();
    printf("%d\n", result);
    printf("%d\n", result1);

    return 0;
}