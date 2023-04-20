#include <stdio.h>

int main()
{

    char str[1001];
    scanf("%s", str);

    // initialize the count variable and assign the all value as zero
    int count[26] = {0};

    // checking the condition and update it to the count array
    int i = 0;
    while (str[i] != '\0')
    {

        int value = str[i] - 97;
        count[value]++;

        i++;
    }

    // printing the count value
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 97, count[i]);
    }

    return 0;
}