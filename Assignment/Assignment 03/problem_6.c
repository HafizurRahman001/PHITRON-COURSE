// Pass by value: Pass by value means that the function receives a copy of the argument's value. In other words, the function works with a local copy of the variable and any changes made to the variable inside the function do not affect the original variable in the calling function. This is the default way of passing arguments in C.

// Example:
#include <stdio.h>

void square(int x)
{
    x = x * x;
    printf("The square is %d\n", x);
}

int main()
{
    int num = 5;
    square(num);
    printf("The original number is still %d\n", num);
    return 0;
}

// Pass by reference: Pass by reference means that the function receives the memory address of the argument. In other words, the function works with the original variable in the calling function, and any changes made to the variable inside the function affect the original variable in the calling function.

// Example:
#include <stdio.h>

void square(int *x)
{
    *x = (*x) * (*x);
    printf("The square is %d\n", *x);
}

int main()
{
    int num = 5;
    square(&num);
    printf("The original number is now %d\n", num);
    return 0;
}