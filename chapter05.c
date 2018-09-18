#include <stdio.h>

void practice_2(void)
{
    int x, y;
    x = 10;
    y = x * 10 + 20;
    printf("%5d\n", y);
    printf("12345\n\n", y);
}

void practice_3_1()
{
    int price = 198 + 138 * 2;
    int remainder = 1000 - (int)(price * 1.05);
    printf("%5d円\n", remainder);
}


int main(void)
{
    practice_2();
    practice_3_1();
    return 0;
}

