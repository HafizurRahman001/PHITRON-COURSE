#include <stdio.h>

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    // taking the input of array
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            scanf("%d ", &arr[row][col]);
        }
    }
    // taking the finding number
    int flag = 0;
    int x;
    scanf("%d", &x);
    // checking the condition
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if (arr[row][col] == x)
            {
                flag = 1;
            }
        }
    }

    // printing the result
    if (flag == 1)
    {
        printf("will not take number\n");
    }
    else
    {
        printf("will take number\n");
    }

    return 0;
}