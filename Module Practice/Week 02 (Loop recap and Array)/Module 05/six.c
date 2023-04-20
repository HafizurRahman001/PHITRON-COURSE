#include <stdio.h>

int main()
{

    int A, B, C, maximum = 0;
    scanf("%d %d %d", &A, &B, &C);
    if ((A > B && A > C))
    {
        maximum = A;
    }
    else if (B > A && B > C)
    {
        maximum = B;
    }

    return 0;
}