#include <stdio.h>

int main()
{
    char alphabet;
    scanf("%c", &alphabet);
    if (alphabet >= 97 && alphabet <= 122)
    {
        printf("%c", alphabet - 32);
    }
    else if (alphabet >= 65 && alphabet <= 90)
    {
        printf("%c", alphabet + 32);
    }

    return 0;
}