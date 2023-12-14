/*
����:
�츮 �� �л� 3���� ����, ���������� ���Ḯ��Ʈ�� ����Ͽ� �����ϰ� �� ������ ��������� ���Ͽ� ����ϼ���.
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
    printf("���� ���: %d\n���� ���: %d\n", avg_eng / 3, avg_math / 3);

    return 0;
}