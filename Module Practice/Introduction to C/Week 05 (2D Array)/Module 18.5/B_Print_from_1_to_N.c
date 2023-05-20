#include <stdio.h>

void nLinePrint(int n)
{
    if (n == 0)
    {
        return;
    }
    nLinePrint(n - 1);
    printf("%d\n", n);
}

int main()
{

    int n;
    scanf("%d", &n);
    nLinePrint(n);

    return 0;
}