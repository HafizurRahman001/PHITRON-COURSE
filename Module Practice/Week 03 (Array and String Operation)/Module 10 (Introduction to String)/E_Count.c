#include <stdio.h>

int main()
{
    char x[1000001];
    scanf("%s", &x);

    int i = 0, sum = 0;
    while (x[i] != '\0')
    {
        sum = sum + (x[i] - '0');
        i++;
    }
    printf("%d", sum);

    return 0;
}