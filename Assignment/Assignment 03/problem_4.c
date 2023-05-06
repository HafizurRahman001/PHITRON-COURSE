//=======================================================
// Has Return + Parameter
#include <stdio.h>

int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    int x = 10, y = 10;
    int result = sum(x, y);
    printf("%d\n", result);

    return 0;
}

// ====================================================

// Has Return + No Parameter
#include <stdio.h>

int numberOfOdd()
{
    int count = 0;
    int arr[5] = {10, 11, 12, 13, 15};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 1 || arr[i] == -1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    // calling the function
    int result = numberOfOdd();
    // printing the result
    printf("%d\n", result);
    return 0;
}

//==========================================================
// No Return + Parameter
#include <stdio.h>

void multiplication(int x, int y)
{
    int result = x * y;
    // printing the result
    printf("%d\n", result);
}

int main()
{
    // initializing the variable
    int x = 10, y = 10;
    // calling the function
    multiplication(x, y);

    return 0;
}

//========================================================
// No Return + No Parameter
#include <stdio.h>
void countingEvenNumber(void)
{
    int arr[5] = {10, 11, 12, 13, 14};
    int count = 0;
    // checking the codition
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    // printing the result
    printf("%d\n", count);
}

int main()
{
    // calling the function
    countingEvenNumber();

    return 0;
}
