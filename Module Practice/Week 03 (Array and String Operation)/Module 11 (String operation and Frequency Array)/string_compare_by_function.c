#include <stdio.h>
#include <string.h>

int main()
{

    char a[100], b[100];
    scanf("%s %s", a, b);

    int stringComparison = strcmp(a, b);

    if (stringComparison > 0)
    {
        printf("B choto");
    }
    else if (stringComparison < 0)
    {
        printf("A choto");
    }
    else
    {
        printf("A and B is equal");
    }

    return 0;
}