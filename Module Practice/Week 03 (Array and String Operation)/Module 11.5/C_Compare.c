#include <stdio.h>

int main()
{

    char s1[21];
    char s2[21];
    scanf("%s", s1);
    scanf("%s", s2);

    int i = 0;
    while (1)
    {
        // condition for terminating array
        if (s1[i] == '\0' && s2[i] == '\0')
        {
            printf("%s\n", s1);
            break;
        }
        else if (s1[i] == '\0')
        {
            printf("%s\n", s1);
            break;
        }
        else if (s2[i] == '\0')
        {
            printf("%s\n", s2);
            break;
        }

        // condition for single array element
        if (s1[i] == s2[i])
        {
            i++;
        }
        else
        {
            if (s1[i] < s2[i])
            {
                printf("%s\n", s1);
                break;
            }
            else
            {
                printf("%s\n", s2);
                break;
            }
        }
    }

    return 0;
}