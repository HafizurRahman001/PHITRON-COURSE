#include <stdio.h>
int main()
{
    int first_input, second_input, sum, substract, multiplication;
    scanf("%d %d", &first_input, &second_input);
    sum = first_input + second_input;
    substract = first_input - second_input;
    multiplication = first_input * second_input;
    float division = (float)first_input / second_input;

    printf("%d + %d = %d\n", first_input, second_input, sum);
    printf("%d - %d = %d\n", first_input, second_input, substract);
    printf("%d * %d = %d\n", first_input, second_input, multiplication);
    printf("%d / %d = %.2f\n", first_input, second_input, division);
    return 0;
}