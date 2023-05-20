#include <stdio.h>

void check(int x)
{
    for (int i = 1; i <= x; i++)
    {
        if (i == x)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d ", i);
        }
    }
}

int main()
{

    int x;
    scanf("%d", &x);
    check(x);

    return 0;
}