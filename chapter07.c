#include <stdio.h>

void practice_3_1()
{
    int year;
    scanf("%d", &year);
    int remainder = year % 4;
    if (remainder == 0) {
        printf("summer olympic will be held!");
    } else if (remainder == 2) {
        printf("winter olympic will be held!");
    } else {
        printf("no olympic game!");
    }
}

int main(void)
{
    practice_3_1();
    return 0;
}
