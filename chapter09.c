#include <stdio.h>

void practice_3_1()
{
    int i;
    for (i = 1; i < 10; ++i) {
        int j;
        for (j = 1; j < 10; ++j) {
            printf("%3d", i*j);
        }
        printf("\n");
    }
}

int main(void)
{
    practice_3_1();
    return 0;
}
