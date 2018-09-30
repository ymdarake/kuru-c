#include <stdio.h>
#include <memory.h>

int initialize_array(void);

int main(void)
{
    initialize_array();
    return 0;
}

int initialize_array(void)
{
    int array[10] = {99, 98, 97, 96, 95, 94, 93, 92, 91, 90};
    printf("%d\n", array[0]);
    printf("%d\n", array[1]);
    printf("%d\n", array[2]);
    printf("%d\n", array[3]);
    printf("%d\n", array[9]);

    int var_len[] = {1,2,3,4,5};
    int count = sizeof(var_len) / sizeof(var_len[0]);
    for (int i = 0; i < count; ++i)
    {
        printf("var_len[%d] = %d\n", i, var_len[i]);
    }

    {
        memcpy(var_len, array, sizeof(array));
        int count = sizeof(var_len) / sizeof(var_len[0]);
        for (int i = 0; i < count; ++i)
        {
            printf("var_len[%d] = %d\n", i, var_len[i]);
        }
    }

    return 0;
}