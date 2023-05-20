#include <stdio.h>
#include <string.h>

int main()
{

    char a[1001];
    scanf("%s", a);

    int lengthOfArray = strlen(a);

    int count = 0;

    // when input is only one (a/b/c/d) (note: a is palindrome)
    if (lengthOfArray == 1)
    {
        count = 1;
    }

    // checking array element by two pointers process
    int i = 0;
    int j = lengthOfArray - 1;

    while (i < j) // এই লুপটা তখন চলবে যখন ইনপুট 1 বা তার বেশি হবে (যেমনঃ abc, aaaa) যদি 1 এর সমান হয় তাহলে লুপের ভিতর ঢুকবেই না। তখন 13 নাং লাইন্টা এক্সিকিউট হবে;
    {
        if (a[i] == a[j])
        {
            count = 1;
        }
        else
        {
            count = 0;
            break;
        }

        i++;
        j--;
    }

    // chacking condition depends on count variable
    if (count > 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}

// for (int i = 0, j = lengthOfArray - 1; i < j; i++, j--)
// {
//     if (a[i] == a[j])
//     {
//         count = 1;
//     }
//     else
//     {
//         count = 0;
//         break;
//     }
// }
