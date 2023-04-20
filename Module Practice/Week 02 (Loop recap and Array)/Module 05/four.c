#include <stdio.h>

int main()
{

    // condition using loop

    // int dig, remain = 0;
    // scanf("%d", &dig);
    // while (dig != 0)
    // {
    //     remain = dig % 10;
    //     dig = dig / 10;
    // }
    // if (remain % 2 == 0)
    // {
    //     printf("EVEN\n");
    // }
    // else
    // {
    //     printf("ODD\n");
    // }

    // if you know the digit number (এক ডিজিট বাদ দেওয়ার জন্য ১০ দিয়ে ভাগ দিতে হয় তাহলে ৩ ডিজিট বাদ দেওয়ার জন্য ১০০০ দিয়ে ভাগ দিতে হয়।)
    int A;
    scanf("%d", &A);

    int result = A / 1000;
    if (result % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}