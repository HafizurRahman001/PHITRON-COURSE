#include <stdio.h>

int main()
{

    char Str[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &Str[i]);
    }

    // printing the string
    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", Str[i]);
    }

    return 0;
}