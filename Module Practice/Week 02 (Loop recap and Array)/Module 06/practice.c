#include <stdio.h>

int main()
{

    int n, a, even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a >= 0)
        {
            if (a == 0)
            {
                positive -= 1;
            }
            positive += 1;
            if (a % 2 == 0)
            {
                even += 1;
            }
            else
            {
                odd += 1;
            }
        }
        else
        {
            negative += 1;
            if (a % 2 == 0)
            {
                even += 1;
            }
            else
            {
                odd += 1;
            }
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}