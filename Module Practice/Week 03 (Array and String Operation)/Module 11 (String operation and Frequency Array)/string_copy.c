#include <stdio.h>
#include <string.h>

int main()
{

    char a[100], b[100];
    scanf("%s %s", a, b);

    int lengthOfB = strlen(b);

    for (int i = 0; i <= lengthOfB; i++)
    {
        a[i] = b[i];
    }

    printf("%s %s", a, b);

    return 0;
}