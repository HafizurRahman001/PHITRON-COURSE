#include <stdio.h>
#include <string.h>

int main()
{

    char a[11];
    char b[11];
    scanf("%s", a);
    scanf("%s", b);

    int lengthOfA = strlen(a);
    int lengthOfB = strlen(b);

    printf("%d %d\n", lengthOfA, lengthOfB);
    printf("%s%s\n", a, b);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    for (int i = 0; i < lengthOfA; i++)
    {
        printf("%c", a[i]);
    }

    printf(" ");

    for (int i = 0; i < lengthOfB; i++)
    {
        printf("%c", b[i]);
    }

    return 0;
}