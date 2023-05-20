#include <stdio.h>

int main()
{

    int x = 100;
    int *ptr = &x;

    // printf("X er value - %d\n", x);
    // printf("X er address - %p\n", &x);
    // printf("ptr er value - %p\n", ptr);
    // printf("ptr er address - %p\n", &ptr);
    // // dereferencing of pointer
    // printf("access the X value with ptr - %d\n", *ptr);

    // x = 200; // or *ptr = 200 একই কথা
    *ptr = 350;

    printf("ptr value - %d\n", *ptr);
    printf("x value - %d\n", x);

    return 0;
}