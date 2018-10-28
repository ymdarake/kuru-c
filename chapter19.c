#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *heap;
    heap = (int *)malloc(sizeof(int)*10);
    heap = (int *)realloc(heap, sizeof(int)*100);
    free(heap);
    return 0;
    /**
     * realloc関数を何回も呼び出すとメモリが散らかってきます。
     * この様な状態をフラグメンテーションと呼び、不安定になります。
     * 初めのmalloc関数である程度大きめに確保しておき、
     * realloc関数を呼び出す場合も、一回で大きめに確保するべきです。
     */
}
