#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[1000001];
    fgets(x, 1000001, stdin);

    int i = 0, sum = 0;
    while (x[i] != '\0')
    {
        sum = sum + (x[i] - 48);
        i++;
    }
    printf("%d", sum);

    return 0;
}