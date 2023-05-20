#include <stdio.h>

int func(char s[], int i)
{
    // base case
    if (s[i] == '\0')
    {
        return 0;
    }

    // calling the recursion function
    int ans = func(s, i + 1);

    // convert the Capital letter into small letter
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] = s[i] + 32;
    }
    // checking if the input is vouwel or not
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        return ans + 1;
    }
    else
    {
        return ans;
    }
}

int main()
{

    char str[205];
    fgets(str, 205, stdin);
    int result = func(str, 0);
    printf("%d\n", result);

    return 0;
}