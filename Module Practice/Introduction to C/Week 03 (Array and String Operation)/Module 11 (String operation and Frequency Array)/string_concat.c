#include <stdio.h>
#include <string.h>

int main()
{

    char a[101];
    char b[50];
    // taking input of array a and b;
    scanf("%s %s", a, b);

    // determine the length of array a and b
    int lengthOfB = strlen(b);
    int lengthOfA = strlen(a);

    // concat the b array element to a array
    for (int i = 0; i <= lengthOfB; i++)
    {
        a[lengthOfA + i] = b[i];
    }

    // print the ultimate result of a array
    printf("%s", a);

    return 0;
}