#include <stdio.h>

void swap_it(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{

    int x, y;
    scanf("%d %d", &x, &y);
    swap_it(&x, &y);
    printf("%d %d", x, y);

    return 0;
}