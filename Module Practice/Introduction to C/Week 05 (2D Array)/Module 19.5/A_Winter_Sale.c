#include <stdio.h>

int main()
{

    float discount, presentPrice;

    scanf("%f %f", &discount, &presentPrice);

    float result = (100 * presentPrice) / (100 - discount);
    printf("%0.2f", result);

    return 0;
}