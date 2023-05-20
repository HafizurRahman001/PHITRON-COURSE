#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    if (b - a == 1 || b - a == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}