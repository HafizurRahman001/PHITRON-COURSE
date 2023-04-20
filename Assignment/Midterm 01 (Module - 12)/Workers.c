#include <stdio.h>

int main()
{

    int initialWorkers, nextWorkers, givenDays;
    scanf("%d %d %d", &initialWorkers, &nextWorkers, &givenDays);

    int neededDays = (initialWorkers * givenDays) / nextWorkers;

    printf("%d", neededDays);

    return 0;
}