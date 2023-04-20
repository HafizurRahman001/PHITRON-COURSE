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

    // taking the finding element as input
    int findingElement;
    scanf("%d", &findingElement);

    // initialize the counting element as zero
    int countingElement = 0;

    // chacking the condition if the array includes findingElement or not
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == findingElement)
        {
            countingElement += 1;
        }
    }

    // printing the counting value;
    printf("%d", countingElement);

    return 0;
}