#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a < 0)
    {
        printf("Please Enter a Non-negative number");
    }
    else
    {
        if (a % 2 == 0)
        {
            printf("Even");
        }
        else
        {
            printf("Odd");
        }
    }

    return 0;
}