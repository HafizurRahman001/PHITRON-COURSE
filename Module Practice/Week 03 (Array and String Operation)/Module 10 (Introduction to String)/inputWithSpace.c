#include <stdio.h>
#include <string.h>

int main()
{

    int a[16];
    // gets(a);
    fgets(a, 16, stdin);
    printf("%s", a);

    return 0;
}