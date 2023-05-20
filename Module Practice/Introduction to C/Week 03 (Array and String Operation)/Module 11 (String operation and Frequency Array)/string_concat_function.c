#include <stdio.h>
#include <string.h>

int main()
{

    char a[101];
    char b[50];
    // taking input of array a and b;
    scanf("%s %s", a, b);

    strcat(a, b);

    printf("%s", a);

    return 0;
}