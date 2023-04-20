#include <stdio.h>

int main()
{

    char alphabet;
    scanf("%c", &alphabet);
    if ((alphabet >= 'a') && (alphabet <= 'z'))
    {
        printf("ALPHA\nIS SMALL\n");
    }
    else if ((alphabet >= 65) && (alphabet <= 90))
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if (alphabet >= '0' && alphabet <= '9')
    {
        printf("IS DIGIT\n");
    }

    return 0;
}