#include <stdio.h>

int countfunc(void);

int global_count;

int main(void)
{
    countfunc();
    countfunc();
    countfunc();
    printf("%d\n", global_count);

    return 0;
}

int countfunc(void)
{
    static int count = 0;
    ++count;
    ++global_count;
    printf("%d\n", count);
    return count;
}
