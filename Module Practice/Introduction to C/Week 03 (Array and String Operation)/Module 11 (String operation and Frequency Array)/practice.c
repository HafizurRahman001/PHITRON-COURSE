#include <stdio.h>
#include <string.h>

int main()
{

    char a[100];
    scanf("%s", a);
    char b[100];
    scanf("%s", b);

    int lengthOfB = strlen(b);
    int lengthOfA = strlen(a);

    for (int i = 0; i <= lengthOfB; i++)
    {
        a[lengthOfA + i] = b[i];
    }

    printf("%s", a);

    return 0;
}