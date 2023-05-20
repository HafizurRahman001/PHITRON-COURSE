#include <stdio.h>

int main()
{

    // taking array 1 input
    int n1;
    scanf("%d", &n1);
    int arr_1[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d ", &arr_1[i]);
    }
    // taking array 2 input
    int n2;
    scanf("%d", &n2);
    int arr_2[n2];
    for (int i = 0; i < n2; i++)
    {
        scanf("%d ", &arr_2[i]);
    }

    // declearing array3
    int arr_3[n1 + n2];

    // coppy arry1 to array3
    for (int i = 0; i < n1; i++)
    {
        arr_3[i] = arr_1[i];
    }

    // copy of array 2 in array 3
    int j = 0;

    for (int i = n1; i < (n1 + n2); i++)
    {
        arr_3[i] = arr_2[j];
        j++;
    }

    // print the final array
    for (int i = 0; i < (n1 + n2); i++)
    {
        printf("%d ", arr_3[i]);
    }

    return 0;
}