#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a == 0)
    {
        printf("Zero");
    }
    else if (a > 0)
    {
        printf("Positives");
    }
    else
    {
        printf("Negative");
    }

    return 0;
}