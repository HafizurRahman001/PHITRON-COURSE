#include <stdio.h>

int main()
{

    int a, b, result;
    scanf("%d %d", &a, &b);

    result = a - b;
    if (result >= 0)
    {
        printf("%d\n", a - b);
    }
    else
    {
        printf("%d\n", 0);
    }

    return 0;
}