#include <stdio.h>

int main()
{

    int n, x;
    int arr[n];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int result = 0;
        scanf("%d ", &x);
        int i = 0;
        while (x / 2 != 0)
        {

            if (x % 2 == 0)
            {
                // printf("%d ", x);
                result += 1;
                arr[i] = result;
                i++;
            }
            else
            {
                break;
            }
            x = x / 2;
        }
    }
    printf("%d ", arr[4]);

    return 0;
}