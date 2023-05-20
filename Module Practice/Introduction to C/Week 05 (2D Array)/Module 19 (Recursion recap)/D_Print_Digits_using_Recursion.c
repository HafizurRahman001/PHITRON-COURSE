#include <stdio.h>

void func(int x)
{
    if (x == 0)
    {
        return;
    }
    int result = x % 10;
    func(x / 10);
    printf("%d ", result);
}

int main()
{

    int n;
    scanf("%d", &n);
    int x;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        func(x);
        if (x == 0)
        {
            printf("%d", 0);
        }
        printf("\n");
    }

    return 0;
}