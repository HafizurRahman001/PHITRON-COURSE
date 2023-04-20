#include <stdio.h>

int main()
{

    int arr[5];

    int checkSizeOfArr = sizeof(arr) / sizeof(int);
    printf("check arr size: %d\n", checkSizeOfArr);

    char Str[5];
    int checkSizeOfString = sizeof(Str) / sizeof(char);
    printf("Check String size: %d\n", checkSizeOfString);

    return 0;
}