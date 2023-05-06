#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int i = 0;
    int j = strlen(str) - 1;
    int isPalindrome = 1;
    // checking is palindrome or not
    while (i < j)
    {
        if (str[i] == str[j])
        {
            isPalindrome = 1;
        }
        else
        {
            isPalindrome = 0;
        }
        i++;
        j--;
    }
    return isPalindrome;
}

int main()
{

    char str[100];
    // taking the string as input
    scanf("%s", str);
    // calling the function
    int result = is_palindrome(str);
    // checking the return condition and printing the result
    if (result == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}