#include <stdio.h>

int main()
{

    int x = 10;

    int *p = &x; // declare for pointer value

    printf("%p\n", p);
    printf("%d\n", *p); // dereference for get p value

    return 0;
}