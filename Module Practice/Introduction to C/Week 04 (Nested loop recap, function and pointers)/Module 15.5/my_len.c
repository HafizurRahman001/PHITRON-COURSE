#include <stdio.h>

int my_len(char str[])
{
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

int main()
{

    char str[100];
    scanf("%s", str);
    int result = my_len(str);
    printf("%d", result);

    return 0;
}