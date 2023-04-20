#include <stdio.h>

int main()
{

    int A, B, C, max = 0, min = 0;
    scanf("%d %d %d", &A, &B, &C);
    if (A >= B && A >= C)
    {
        max = A;
    }
    else if (B >= A && B >= C)
    {
        max = B;
    }
    else
    {
        max = C;
    }

    // minimum value determined
    if (A <= B && A <= C)
    {
        min = A;
    }
    else if (B <= A && B <= C)
    {
        min = B;
    }
    else
    {
        min = C;
    }
    printf("%d %d\n", min, max);

    return 0;
}