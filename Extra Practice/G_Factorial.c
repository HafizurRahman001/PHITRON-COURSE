#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        int result = 1;
        // print the factorial

        for (int i = 1; i <= a; i++)
        {
            result *= i;
        }

        printf("%d \n", result);
    }

    return 0;
}