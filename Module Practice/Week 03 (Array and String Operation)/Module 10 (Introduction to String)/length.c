#include <stdio.h>

int main()
{

    char a[100];
    fgets(a, 100, stdin);

    int i = 0, count = 0;
    while (a[i] != '\0')
    {
        count++;
        i++;
    }
    printf("%d", count);

    return 0;
}