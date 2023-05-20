#include <stdio.h>

int main()
{

    char str[1001];
    fgets(str, 1001, stdin);

    int space = 0, capital = 0, small = 0;

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            space++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            capital++;
        }
        else
        {
            small++;
        }
        i++;
    }

    printf("Capital - %d\nSmall - %d\nSpaces - %d", capital, small, space);

    return 0;
}