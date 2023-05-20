// C++ program to find smallest number
// with given sum of digits.
#include <stdio.h>

// Prints minimum number with given digit
// sum and only allowed digits as 4 and 7.
void findMin(int sum)
{
    int a = 0, b = 0;
    while (sum > 0)
    {
        // Cases where all remaining digits
        // are 4 or 7 (Remaining sum of digits
        // should be multiple of 4 or 7)
        if (sum % 7 == 0)
        {
            b++;
            sum -= 7;
        }
        else if (sum % 4 == 0)
        {
            a++;
            sum -= 4;
        }

        // If both 4s and 7s are there
        // in digit sum, we subtract a 4.
        else
        {
            a++;
            sum -= 4;
        }
    }

    if (sum < 0)
    {
        printf("-1n");
        return;
    }

    for (int i = 0; i < a; i++)
        printf("4");

    for (int i = 0; i < b; i++)
        printf("7");

    // printf("n");
}

// Driver code
int main()
{
    findMin(20);
    return 0;
}
