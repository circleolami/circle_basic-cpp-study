/*
문제:
우리 반 학생 3명의 영어, 수학점수를 연결리스트를 사용하여 관리하고 각 과목의 평균점수를 구하여 출력하세요.
*/

#include <stdio.h>
struct score
{
    int eng;
    int math;
    struct score *next;
};

int main()
{
    int avg_eng = 0, avg_math = 0;
    struct score a, b, c;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    a.eng = 80;
    a.math = 80;

    b.eng = 90;
    b.math = 90;

    c.eng = 70;
    c.math = 70;

    struct score *p;

    for (p = &a; p != NULL; p = p->next)
    {
        avg_eng += p->eng;
        avg_math += p->math;
    }
    printf("영어 평균: %d\n수학 평균: %d\n", avg_eng / 3, avg_math / 3);

    return 0;
}