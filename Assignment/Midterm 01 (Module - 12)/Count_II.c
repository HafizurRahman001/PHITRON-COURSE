#include <stdio.h>

int main()
{

    char str[1001];
    scanf("%s", str);

    // intialize the toatla vowel as zero
    int totalVowel = 0;

    // checking the array element as it vowel or not
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            totalVowel += 1;
        }
        i++;
    }

    // print the total vowel
    printf("%d", totalVowel);

    return 0;
}