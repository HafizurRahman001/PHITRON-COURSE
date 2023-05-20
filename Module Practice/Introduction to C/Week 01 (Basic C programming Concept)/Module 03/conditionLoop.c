#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i <= 5; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d -Even\n", i);
        }
        else
        {
            printf("%d -Odd\n", i);
        }
    }

    return 0;
}