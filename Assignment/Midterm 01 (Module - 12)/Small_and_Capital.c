#include <stdio.h>

int main()
{

    char str[1001];
    scanf("%s", str);

    // initialize the totaCapitalLetters and totalSmallLetters
    int totalCapitalLetters = 0, totalSmallLetter = 0;

    // checking the conditions that the array element is capital or small letters;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            totalSmallLetter += 1;
        }
        else
        {
            totalCapitalLetters += 1;
        }

        i++;
    }

    // print the total capital and small letters
    printf("%d %d", totalCapitalLetters, totalSmallLetter);

    return 0;
}