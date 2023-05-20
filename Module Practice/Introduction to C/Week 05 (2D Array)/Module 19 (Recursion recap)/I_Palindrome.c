#include <stdio.h>
#include <string.h>

int main()
{

    char a[1005], b[1005];
    scanf("%s", a);
    strcpy(b, a);

    int i = 0;
    int j = strlen(b) - 1;
    while (i < j)
    {
        char temp = b[i];
        b[i] = b[j];
        b[j] = temp;
        i++;
        j--;
    }

    if (strcmp(a, b) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}