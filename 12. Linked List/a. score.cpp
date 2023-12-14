/*
문제:
우리 반 학생 3명의 영어, 수학 점수를 구조체 배열을 사용하여 입력받고 출력하는 프로그램을 만드세요.
*/

#include <stdio.h>

struct score
{
    int eng;
    int math;
};

int main()
{
    struct score a[3];

    for (int i = 0; i < 3; i++)
    {
        printf("%d번 학생의 점수를 입력하세요\n", i + 1);
        printf("%d번 학생의 영어점수는?\n", i + 1);
        scanf("%d", &(a[i].eng));
        printf("%d번 학생의 수학점수는?\n");
        scanf("%d", &(a[i].math));
    }

    return 0;
}