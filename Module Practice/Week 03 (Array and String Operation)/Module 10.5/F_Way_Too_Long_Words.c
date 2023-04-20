#include <stdio.h>
#include <string.h>

int main()
{

    int sizeOfArr;

    scanf("%d", &sizeOfArr);

    char arr[101];
    int lengthOfArr = 0;
    char firstDigit;
    char lastDigit;

    // taking the array elemnt input
    for (int i = 0; i < sizeOfArr; i++)
    {
        scanf("%s", arr);

        lengthOfArr = strlen(arr);

        if (lengthOfArr <= 10)
        {
            printf("%s\n", arr);
        }
        else
        {
            firstDigit = arr[0];
            lastDigit = arr[lengthOfArr - 1];

            printf("%c%d%c\n", firstDigit, lengthOfArr - 2, lastDigit);
        }
    }

    return 0;
}