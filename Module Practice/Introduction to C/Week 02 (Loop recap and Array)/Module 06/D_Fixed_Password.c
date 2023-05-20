#include <stdio.h>

int main()
{

    // what I work

    // int n, i = 1;
    // while (i == 1)
    // {
    //     scanf("%d ", &n);
    //     if (n == 1999)
    //     {
    //         printf("Correct\n");
    //         i -= 1;
    //     }
    //     else
    //     {
    //         printf("Wrong\n");
    //     }
    // }

    // what Teacher work
    int a;
    while (scanf("%d", &a) != EOF)
    {
        if (a == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}