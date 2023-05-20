#include <stdio.h>
#include <string.h>

int main()
{

    char a[1001];
    scanf("%s", a);

    char b[1001];
    scanf("%s", b);

    int lengthOf_a = strlen(a);
    int lengthOf_b = strlen(b);

    printf("%d %d\n", lengthOf_a, lengthOf_b);
    printf("%s %s", a, b);

    return 0;
}