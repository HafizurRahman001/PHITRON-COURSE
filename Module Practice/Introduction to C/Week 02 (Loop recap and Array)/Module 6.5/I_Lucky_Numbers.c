#include <stdio.h>

int main()
{

    int n, first_digit, last_digit;
    scanf("%d", &n);
    last_digit = n / 10;  // 2
    first_digit = n % 10; // 0

    if (first_digit == 0)
    {
        printf("YES\n");
    }
    else if (first_digit >= last_digit)
    {
        if (first_digit % last_digit == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        if (last_digit % first_digit == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}