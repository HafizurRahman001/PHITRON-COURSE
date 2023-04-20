#include <stdio.h>

int main()
{

    int n, dig;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &dig);
        do
        {

            printf("%d ", dig % 10);
            dig = dig / 10;
        } while (dig != 0);
        printf("\n");
    }

    return 0;
}