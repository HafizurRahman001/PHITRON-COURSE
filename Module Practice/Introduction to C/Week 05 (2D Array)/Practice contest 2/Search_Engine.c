#include <stdio.h>

int main()
{

    // taking the test case
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // taking the array size
        int x;
        scanf("%d", &x);

        // declare the array
        int arr[x];

        // taking the array element as input
        for (int j = 0; j < x; j++)
        {
            scanf("%d ", &arr[j]);
        }

        // taking the finding Digit
        int findingDigit;
        scanf("%d", &findingDigit);

        // matching the finding result
        int flag = 0;
        for (int k = 0; k < x; k++)
        {
            if (arr[k] == findingDigit)
            {
                flag = k + 1;
                break;
            }
                }

        // checking the flag condition
        if (flag == 0)
        {
            printf("Case %d: Not Found\n", i + 1);
        }
        else
        {
            // using +1 because array index start with 0, but the result should be from the 1
            printf("Case %d: %d\n", i + 1, flag);
        }
    }

    return 0;
}