#include <stdio.h>

void sort_arr(void)
{
    int arr[3];
    // taking the array input
    for (int i = 0; i < 3; i++)
    {
        scanf("%d ", &arr[i]);
    }
    // store the array element in other separated variable
    int a = arr[0];
    int b = arr[1];
    int c = arr[2];

    // array sorting
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // printing the array
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    printf("%d\n%d\n%d", a, b, c);
}

int main()
{
    // calling the function
    sort_arr();

    return 0;
}