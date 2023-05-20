#include <stdio.h>

int main()
{
    long long int a, b, c;
    long long int result;
    scanf("%lld %lld %lld", &a, &b, &c);

    //.৩ নাং শর্ত অনুযায়ী, সবচেয়ে ছোট সংখ্যা হল b, তাই b সংখ্যক মুর্তি বানানো সম্ভব। এ জন্য যেহেতু b সংখ্যক মূর্তী বানানো হয়ে যাবে তাই a ও b এর থেকে b কে আগে বাদ দিয়ে নিতে হবে।
    long long int remain_a = a - b;
    long long int remain_c = c - b;

    if (a == 1)
    {
        printf("1\n");
    }
    else if (a == 0)
    {
        printf("0\n");
    }
    else if (a < b && a < c)
    {
        printf("%lld", a);
    }
    else if (remain_a / 2 <= remain_c)
    {
        result = b + (remain_a / 2);
        printf("%lld\n", result);
    }
    else
    {
        result = b + remain_c;
        printf("%lld\n", result);
    }

    return 0;
}