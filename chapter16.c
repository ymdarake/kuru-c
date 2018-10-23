#include <stdio.h>
#include <string.h>

// struct student {
//     int grade;
//     int clazz;
//     int number;
//     char name[64];
//     double height;
//     double weight;
// };
// int main(void)
// {
//     struct student john;
//     john.grade = 3;
//     printf("%d\n", john.grade);
//     return 0;
// }


typedef struct student_tag {
	int grade;
	int clazz;
	int number;
	char name[64];
	double height;
	double weight;
} student;

// int main(void)
// {
//     student john;
//     john.grade = 3;
//     printf("%d\n", john.grade);
//     return 0;
// }

void student_print(student *st);

/**
 * 構造体のポインタ
 * 
 * 構造体の各要素は、宣言の時の順番通りに並んでおり、
 * &演算子で求められるアドレスは、構造体の始めの要素のアドレスです。
 */
int main(void)
{
    student john;
    student *p_john;
    p_john = &john;
    (*p_john).grade = 2;
    p_john->grade = 1;
    strcpy((*p_john).name, "MARIO");
    printf("%d\n", john.grade);
    printf("%s\n", john.name);
    student_print(p_john);
    return 0;
}

/**
 * 普通に渡すことが出来る構造体を、ポインタ変数として渡す理由の
 * 1つ目は、普通のポインタ変数と同じく、関数内で値を変更出来るようにするためです。
 * ここでは試していませんが、関数内で値を変えると呼び出し元の変数の中身も変わります。
 * 
 * 2つ目は、関数呼び出しの高速化のためです。
 * 構造体を渡す時、その中身は全てコピーされます。
 * 構造体の中に、大きな配列があれば、その中身までまるごとコピーされます。
 * これは、当然ながらそれなりに時間のかかる処理となります。
 * しかし、ポインタのアドレス値を渡すだけなら、ほとんど時間はかかりません。
 * 
 * 一般には、構造体はポインタ変数を使って受け渡しすることが多いようですが、
 * 中の値を書き換えてしまうなどのトラブルにも見舞われやすいので、
 * 慣れない内は、普通に受け渡ししていた方が簡単だと思います。
 */

void student_print(student *st)
{
    printf("[grade]: %d\n", st->grade);
    printf("[clazz]: %d\n", st->clazz);
    printf("[number]: %d\n", st->number);
    printf("[name]: %s\n", st->name);
    printf("[height]: %f\n", st->height);
    printf("[weight]: %f\n", st->weight);
}