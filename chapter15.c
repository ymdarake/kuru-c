#include <stdio.h>

/**
 * ポインタ型
 * 
 * ポインタ型とは、アドレスを記憶する変数の型のことを意味しています。
 * 
 * 指定アドレスに記憶された数値を取り出すためです。
 * 例えば、int型、double型、char型は、全てサイズが違っています。
 * int型の場合、標準的なコンパイラでは4バイトのサイズですから、
 * 億単位で存在するメモリというロッカーの4個分を使っていることになります。
 * int型の値を取り出すには、この4個をまとめて取り出さなくてはいけません。
 * 型によっては、メモリに記憶された2進数の読み方まで違ってくることもあるので、
 * 元々の型がなんだったのかがわからない限り、記憶された数値を取り出せない
 *
 * 
 * ポインタ値
 * 
 * ポインタ型の変数が記憶出来る数値
 * = 変数のアドレスの値のこと
 * 
 * 多くのコンパイラでは、ポインタ値とは、単なる符号なしの整数値
 * 
 * 
 * ポインタ変数
 * 
 * ポインタ型で宣言された実際の変数
 * 
 * その元となった型の変数のアドレスを自由に代入できます。
 * 更に、記憶しているアドレスのメモリを読んだり書き換えたりすることが出来ます。
 */

void func(int *pvalue);

int main(void)
{
	int value = 10;
	printf("&value = %p\n", &value);
	func(&value);
	printf("value = %d\n", value);
	return 0;
}

void func(int *pvalue)
{
	printf("pvalue = %p\n", pvalue);
	*pvalue = 100;
	return;
}


void example(void)
{
		// int i1,i2,i3;
	// printf("i1(%p)\n",&i1);
	// printf("i2(%p)\n",&i2);
	// printf("i3(%p)\n",&i3);

    // int array[10];
    // printf("array___(%p)\n", array);
    // printf("array[0](%p)\n", &array[0]);
    // printf("array[1](%p)\n", &array[1]);
    // printf("array[2](%p)\n", &array[2]);

    // char str[256] = "DRAGON";
	// scanf("%s",&str[6]); /* 6番の要素のアドレス */
	// printf("%s\n",str);

	int *p;// = NULL;
	int i;
	// printf("p = %p\n", p);
	// p = &i;
	// printf("p = %p\n", p);
	// printf("&i = %p\n", &i);
	// printf("*p = %p\n", *p);
	p = &i;
	*p = 10;
	printf("*p = %d\n", *p);
	printf("i = %d\n", i);
}
