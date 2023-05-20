#include <stdio.h>

int main()
{

    char a[1000001];
    scanf("%s", a);

    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] == ',')
        {
            printf("%c", ' ');
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            printf("%c", a[i] - 32);
        }
        else
        {
            printf("%c", a[i] + 32);
        }

        i++;
    }

    return 0;
}