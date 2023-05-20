#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    char arr[n + 1];
    scanf("%s", arr);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // printf("%d ", arr[i] - 48);
        sum += (arr[i] - '0');
    }

    printf("%d", sum);

    return 0;
}