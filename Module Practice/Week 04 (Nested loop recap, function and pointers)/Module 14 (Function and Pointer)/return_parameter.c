#include <stdio.h>

int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    // taking input
    int x, y;
    scanf("%d %d", &x, &y);

    // calling function
    int result = sum(x, y);
    printf("%d", result);

    return 0;
}