#include <stdio.h>

int main()
{

    int x, a, b, tiger = 0, pathan = 0;
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            tiger++;
        }
        else if (b > a)
        {
            pathan++;
        }
        else
        {
            pathan++;
            tiger++;
        }
    }

    // printing the result
    if (tiger > pathan)
    {
        printf("Tiger\n");
    }
    else if (pathan > tiger)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }

    return 0;
}