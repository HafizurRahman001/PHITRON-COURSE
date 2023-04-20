#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    // taking the array element as input
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    int totalEvenNumber = 0, totalOddNumber = 0;

    // checking the even and odd from array and update the totalEvenNumber and totalOddNumber;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            totalEvenNumber += 1;
        }
        else
        {
            totalOddNumber += 1;
        }
    }

    // print the total even and odd number
    printf("%d %d", totalEvenNumber, totalOddNumber);

    return 0;
}