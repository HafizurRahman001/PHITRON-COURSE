#include <stdio.h>

int main()
{

    int n, a, result = 0;
    scanf("%d ", &n);
    for (int i = 1; i <= n; i++)
    {

        scanf("%d ", &a);
        if (result < a)
        {
            result = a;
        }
    }
    printf("%d", result);

    return 0;
}