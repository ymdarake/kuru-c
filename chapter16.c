#include <stdio.h>

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
	int grade;/* 学年 */
	int clazz;/* クラス */
	int number;/* 出席番号 */
	char name[64];/* 名前 */
	double stature;/* 身長 */
	double weight;/* 体重 */
} student;

int main(void)
{
    student john;
    john.grade = 3;
    printf("%d\n", john.grade);
    return 0;
}
