#include <stdio.h>

int main()
{

    char a[100];
    fgets(a, 100, stdin);

    int countLength = strlen(a);
    printf("%d", countLength);

    return 0;
}